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

    # Remove main.wasm if it exists
    rm -f "$dir/main.wasm"

    # Run both build commands
    ./../build/tinygo build -o "$dir/${dir}-leaking-asyncifiy.wasm" -target=wasip1 -gc=leaking -scheduler=asyncify "$dir/main.go"
    ./../build/tinygo build -o "$dir/${dir}-leaking-nc.wasm" -target=wasip1 -gc=leaking -scheduler=nc "$dir/main.go"
  fi
done

# Run the Node.js file
node --no-warnings index.js
