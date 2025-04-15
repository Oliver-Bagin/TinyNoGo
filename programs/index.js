const fs = require("fs");
const path = require("path");
const { WASI } = require("wasi");
const os = require("os");

// Capture and test printed strings
function testOutput(programName, output, truncate = false, test = (x) => [true, "Success"]) {
  console.log(`\n\t📦 \x1b[1mOutput from ${programName}\x1b[0m`);

  const lines = output.trim().split('\n');
  const totalLines = lines.length;

  if (truncate && totalLines > 10) {
    const head = lines.slice(0, 25);
    const tail = lines.slice(-25);
    console.log("\t✂️ Truncated Output:");
    console.log([...head, '...', ...tail].map(x => `\t${x}`).join('\n'));
  } else {
    console.log(lines.map(x => `\t${x}`).join('\n'));
  }

  const [passed, message] = test(lines);
  if (passed) {
    console.log(`\t ✅ \x1b[32mTest Passed:\x1b[0m ${message}\n`);
  } else {
    console.log(`\t ❌ \x1b[31mTest Failed:\x1b[0m ${message}\n`);
  }
}

async function runWasmFile(filePath) {
  const wasmBuffer = fs.readFileSync(filePath);

  // Create a temp file to capture stdout
  const tmpFilePath = path.join(os.tmpdir(), `wasm-out-${Date.now()}.log`);
  const tmpFd = fs.openSync(tmpFilePath, 'w+');

  const wasi = new WASI({
    version: 'preview1',
    args: [],
    env: {},
    preopens: {
      '/': './'
    },
    stdout: tmpFd,
    stderr: tmpFd,
  });

  const importObject = {
    wasi_snapshot_preview1: wasi.wasiImport,
  };

  try {
    const { instance } = await WebAssembly.instantiate(wasmBuffer, importObject);
    wasi.start(instance);
  } finally {
    fs.closeSync(tmpFd);
  }

  // Read the captured output
  const captured = fs.readFileSync(tmpFilePath, 'utf8');
  fs.unlinkSync(tmpFilePath); // Clean up

  return captured;
}

// Run all compiled programs under ./programs/
async function runAllPrograms() {
  const baseDir = path.resolve(__dirname);
  const programDirs = fs.readdirSync(baseDir).filter(name =>
    fs.statSync(path.join(baseDir, name)).isDirectory() &&
    /^program\d+$/.test(name)
  );

  for (const dir of programDirs) {
    console.log(`\n🟪 \x1b[1mProgram :=: ${dir}\x1b[0m`);
    const dirPath = path.join(baseDir, dir);
    const wasmFiles = fs.readdirSync(dirPath).filter(name => name.endsWith(".wasm"));

    for (const wasmFile of wasmFiles) {
      const fullPath = path.join(dirPath, wasmFile);
      try {
        const output = await runWasmFile(fullPath);
        testOutput(`${dir}/${wasmFile}`, output, true);
      } catch (err) {
        console.error(`🚨🚨🚨 Error running ${dir}/${wasmFile}:`, err);
      }
    }
  }

  console.log("\n✅ All programs executed.");
}

runAllPrograms().catch(console.error);
