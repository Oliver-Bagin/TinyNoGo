#!/bin/bash

set -e  # Exit immediately if a command exits with a non-zero status

# Run make and clean
make || { echo "❌ make failed"; exit 1; }
./build/tinygo clean || { echo "❌ tinygo clean failed"; exit 1; }

# Enter the programs directory
cd ./programs/ || { echo "❌ Failed to enter programs directory"; exit 1; }

# Loop through all directories matching program followed by a number
for dir in program[0-9]*; do
  if [ -d "$dir" ]; then
    echo "🔧 Processing $dir..."

    # Build all variants
    ./../build/tinygo build -o "$dir/${dir}-leaking-asyncifiy.wasm" -target=wasip1 -gc=leaking -scheduler=asyncify "$dir/main.go" \
      || { echo "❌ Build failed for $dir - asyncify"; exit 1; }

    ./../build/tinygo build -o "$dir/${dir}-leaking-nc.wasm" -target=wasip1 -gc=leaking -scheduler=nc "$dir/main.go" \
      || { echo "❌ Build failed for $dir - nc"; exit 1; }
    
    ./../build/tinygo build -o "$dir/${dir}-leaking-nc.wasm" -target=wasip1 -gc=conservative -scheduler=nc "$dir/main.go" \
      || { echo "❌ Build failed for $dir - nc"; exit 1; }

    # Create a dump folder
    mkdir -p "$dir/dumps"

    # Generate dumps
    for wasm in "$dir/${dir}-leaking-asyncifiy.wasm" "$dir/${dir}-leaking-nc.wasm"; do
      base=$(basename "$wasm" .wasm)
      echo "📦 Generating debug dumps for $base.wasm..."

      # WAT text format
      wasm2wat "$wasm" -o "$dir/dumps/$base.wat" \
        || { echo "❌ wasm2wat failed for $wasm"; exit 1; }

      # High-level decompiled version (like pseudo-C give it .c for syntax highlighting)
      wasm-decompile "$wasm" -o "$dir/dumps/$base.decompiled.c" \
        || { echo "❌ wasm-decompile failed for $wasm"; exit 1; }
    done
  fi
done

# Run the Node.js test runner
node --no-warnings index.js
