// index.js

const fs = require("fs");
const { WASI } = require("wasi");
const path = require("path");

// NEW: Add the `version` field explicitly
const wasi = new WASI({
  version: 'preview1',
  args: [],
  env: {},
  preopens: {
    '/': './'
  }
});

const importObject = {
  wasi_snapshot_preview1: wasi.wasiImport,
  yourmodulename: {
    add: function (x, y) {
      console.log(`add(${x}, ${y}) called from JS`);
      return x + y;
    }
  }
};

async function runWasm() {
  const wasmPath = path.resolve(__dirname, "main.wasm");
  const wasmBuffer = fs.readFileSync(wasmPath);

  const { instance } = await WebAssembly.instantiate(wasmBuffer, importObject);

  // Start the WASI runtime
  wasi.start(instance);

  console.log("WASM module finished execution.");
}

runWasm().catch(console.error);
