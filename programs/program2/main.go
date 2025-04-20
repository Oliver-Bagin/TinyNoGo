package main

import (
	"fmt"
	"runtime"
	_ "unsafe"
)

var retained [][]byte // only used if GC is off, to force heap growth

//go:linkname SetGCDebug runtime.SetGCDebug
func SetGCDebug(val bool)

func printMemStats() {
	var stats runtime.MemStats
	runtime.ReadMemStats(&stats)
	println()
	fmt.Printf("Alloc = %v MiB\n", stats.Alloc/1024/1024)
	fmt.Printf("TotalAlloc = %v MiB\n", stats.TotalAlloc/1024/1024)
	fmt.Printf("Sys = %v MiB\n", stats.Sys/1024/1024)
}

func main() {
	SetGCDebug(true)
	fmt.Println("Begin")
	for i := 0; i <= 4000; i++ {
		data := make([]byte, (1<<20)/80) // Allocate 0.0125MB
		runtime.Gosched()
		retained = [][]byte{data} // Reset retained to only hold the latest allocation
	}
	printMemStats()
	println(len(retained))
}
