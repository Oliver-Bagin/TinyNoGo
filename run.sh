#!/bin/bash

# Run make and clean
make
./build/tinygo clean

# Enter the programs directory
cd ./programs/ || exit

# Loop through all directories matching program followed by a number
for dir in program[0-9]*; do
  if [ -d "$dir" ]; then
    echo "Processing $dir..."

    # Remove old wasm files
    rm -f "$dir/main.wasm"

    # Build both variants
    ./../build/tinygo build -o "$dir/${dir}-leaking-asyncifiy.wasm" -target=wasip1 -gc=leaking -scheduler=asyncify "$dir/main.go"
    ./../build/tinygo build -o "$dir/${dir}-leaking-nc.wasm" -target=wasip1 -gc=leaking -scheduler=nc "$dir/main.go"

    # Create a dump folder
    mkdir -p "$dir/dumps"

    # For both generated .wasm files
    for wasm in "$dir/${dir}-leaking-asyncifiy.wasm" "$dir/${dir}-leaking-nc.wasm"; do
      base=$(basename "$wasm" .wasm)
      echo "  Generating debug dumps for $base.wasm..."

      # WAT text format
      wasm2wat "$wasm" -o "$dir/dumps/$base.wat"

      # High-level decompiled version (like pseudo-C)
      wasm-decompile "$wasm" -o "$dir/dumps/$base.decompiled.wat"
    done
  fi
done

# Run the Node.js test runner
node --no-warnings index.js
