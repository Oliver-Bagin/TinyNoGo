const fs = require("fs");
const path = require("path");
const { WASI } = require("wasi");
const os = require("os");

// Capture and test printed strings
function testOutput(programName, output, truncate = false, test = (x) => [true, "Success"]) {
  console.log(`\n\t📦 \x1b[1mOutput from ${programName}\x1b[0m`);

  const lines = output.trim().split("\n");
  const totalLines = lines.length;

  if (truncate && totalLines > 30) {
    const head = lines.slice(0, 15);
    const tail = lines.slice(-15);
    console.log("\t✂️ Truncated Output:");
    console.log([...head, '...', ...tail].map(x => `\t${x}`).join("\n"));
  } else {
    console.log(lines.map(x => `\t${x}`).join("\n"));
  }

  const [passed, message] = test(lines);
  if (passed) {
    console.log(`\t ✅ \x1b[32mTest Passed:\x1b[0m ${message}\n`);
  } else {
    console.log(`\t ❌ \x1b[31mTest Failed:\x1b[0m ${message}\n`);
  }
}

async function runWasmFile(filePath, schedFd) {
  const wasmBuffer = fs.readFileSync(filePath);

  // Temporary capture for stdout/stderr
  const tmpFilePath = path.join(os.tmpdir(), `wasm-out-${Date.now()}.log`);
  const tmpFd = fs.openSync(tmpFilePath, 'w+');

  const wasi = new WASI({
    version: 'preview1',
    args: [],
    env: {},
    preopens: { '/': './' },
    stdout: tmpFd,
    stderr: tmpFd,
  });

  let memory;
  const importObject = {
    wasi_snapshot_preview1: wasi.wasiImport,
    env: {
      schedular_log: (ptr, len) => {
        const bytes = new Uint8Array(memory.buffer, ptr, len);
        const str = new TextDecoder('utf8').decode(bytes);
        fs.writeSync(schedFd, str + '\n');
      }
    }
  };

  const { instance } = await WebAssembly.instantiate(wasmBuffer, importObject);
  memory = instance.exports.memory;

  try {
    wasi.start(instance);
  } finally {
    fs.closeSync(tmpFd);
  }

  const captured = fs.readFileSync(tmpFilePath, 'utf8');
  fs.unlinkSync(tmpFilePath);
  return captured;
}

async function runAllPrograms() {
  const baseDir = path.resolve(__dirname);

  const programDirs = fs.readdirSync(baseDir).filter(name =>
    fs.statSync(path.join(baseDir, name)).isDirectory() && /^program\d+$/.test(name)
  );

  for (const dir of programDirs) {
    console.log(`\n🟪 \x1b[1mProgram :=: ${dir}\x1b[0m`);
    const dirPath = path.join(baseDir, dir);
    const wasmDir = path.join(dirPath, 'wasm');
    const outDir = path.join(dirPath, 'out');

    if (fs.existsSync(outDir)) {
      fs.rmSync(outDir, { recursive: true, force: true });
    }
    fs.mkdirSync(outDir);
    console.log(`📂 Created output directory at ${outDir}`);

    const wasmFiles = fs.readdirSync(wasmDir).filter(name => name.endsWith('.wasm'));

    for (const wasmFile of wasmFiles) {
      const wasmPath = path.join(wasmDir, wasmFile);
      const baseName = path.basename(wasmFile, '.wasm');

      const schedDumpPath = path.join(outDir, `${baseName}.schedular.dump`);
      const stdOutPath = path.join(outDir, `${baseName}.std.out`);

      const schedFd = fs.openSync(schedDumpPath, 'w+');
      let output = '';

      try {
        output = await runWasmFile(wasmPath, schedFd);
        testOutput(`${dir}/wasm/${wasmFile}`, output, true);
      } catch (err) {
        console.error(`🚨 Error running ${dir}/wasm/${wasmFile}:`, err);
        output = `*** Error: ${err.message} ***`;
      }

      fs.closeSync(schedFd);
      fs.writeFileSync(stdOutPath, output, 'utf8');
      console.log(`📄 Wrote output to ${stdOutPath}`);
      console.log(`📄 Wrote scheduler dump to ${schedDumpPath}`);
    }
  }

  console.log("\n✅ All programs executed.");
}

runAllPrograms()
.then(
  () => {
   const { exec } = require('child_process');
   exec('python3 ./programs/charts.py', (err, stdout, stderr) => {
     if (err) {
       // node couldn't execute the command
       console.log(err)
       return;
     }
 
     console.log(`stdout: ${stdout}`);
     if (stderr == "") {
      console.log(`\t 📈 \x1b[32mCharts Created\x1b}\n`)
     } else {
      console.log(`stderr: ${stderr}`);
     }
   });
  }
 )
.catch(console.error);
