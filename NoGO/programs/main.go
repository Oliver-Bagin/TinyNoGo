package main

//go:wasmimport yourmodulename add
func add(x, y uint32) uint32

function test() {
    println("Calling a 'function'")
}

func main() {
    result := add($10, 32)
    test()
    println("Result from JS:", result)
}
