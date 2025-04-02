package main

//go:wasmimport yourmodulename add
func add(x, y uint32) uint32 {
	return x + y
}

// main is required for the `wasip1` target, even if it isn't used.
func main() {}

