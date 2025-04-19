const fs = require("fs");
const path = require("path");
const { execSync } = require("child_process");
const yaml = require("js-yaml");

function runOrExit(cmd, cwd = ".", label = "") {
  const absCwd = path.resolve(cwd);
  const displayedCmd = cmd.replaceAll(absCwd, "./ ... ");

  try {
    console.log(`🔧 Running: ${displayedCmd}`);
    execSync(cmd, { cwd, stdio: "inherit" });
  } catch (e) {
    console.error(`❌ ${label || displayedCmd} failed`);
    process.exit(1);
  }
}

// Initial setup
runOrExit("make", ".", "make");
runOrExit("./build/tinygo clean", ".", "tinygo clean");

// Process each program directory
const programsDir = path.join(__dirname, "programs");
fs.readdirSync(programsDir, { withFileTypes: true }).forEach((entry) => {
  if (entry.isDirectory() && /^program\d+$/.test(entry.name)) {
    const programPath = path.join(programsDir, entry.name);
    console.log(`📁 Processing ${entry.name}`);

    // Prepare (and clear) the wasm output directory
    const wasmDir = path.join(programPath, "wasm");
    fs.rmSync(wasmDir, { recursive: true, force: true });
    fs.mkdirSync(wasmDir, { recursive: true });

    const altFile = path.join(programPath, "alternatives.yaml");
    if (!fs.existsSync(altFile)) {
      console.warn(`⚠️  No alternatives.yaml found in ${entry.name}`);
      return;
    }

    const alternatives = yaml.load(fs.readFileSync(altFile, "utf8"));
    const mainGo = path.join(programPath, "main.go");

    alternatives.forEach((alt) => {
      const [name, config] = Object.entries(alt)[0];
      const outWasm = path.join(wasmDir, `${entry.name}-${name}.wasm`);
      const flags = config.flags;
      const flagStr = `-target=${flags.target} -gc=${flags.gc} -scheduler=${flags.schedular}`;

      const buildCmd = `./../../build/tinygo build -o "${outWasm}" ${flagStr} "${mainGo}"`;
      runOrExit(buildCmd, programPath, `build ${name}`);

      // Generate dumps
      const baseName = path.basename(outWasm, ".wasm");
      const dumpDir = path.join(programPath, "dumps");
      fs.mkdirSync(dumpDir, { recursive: true });

      runOrExit(`wasm2wat "${outWasm}" -o "${dumpDir}/${baseName}.wat"`, ".", `wasm2wat ${name}`);
      runOrExit(`wasm-decompile "${outWasm}" -o "${dumpDir}/${baseName}.decompiled.c"`, ".", `wasm-decompile ${name}`);
    });
  }
});

// Run the test runner
runOrExit("node --no-warnings ./programs/index.js", ".", "test runner");
