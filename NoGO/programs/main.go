package main

//go:wasmimport yourmodulename add
function add(x, y uint32) uint32

function main() {
    result := add(10, 32)
    println("Result from JS:", result)
}
