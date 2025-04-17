package main

import (
	"fmt"
	"runtime"
)

var retained [][]byte // only used if GC is off, to force heap growth

func printMemStats() {
	var stats runtime.MemStats
	runtime.ReadMemStats(&stats)
	println()
	fmt.Printf("Alloc = %v MiB\n", stats.Alloc/1024/1024)
	fmt.Printf("TotalAlloc = %v MiB\n", stats.TotalAlloc/1024/1024)
	fmt.Printf("Sys = %v MiB\n", stats.Sys/1024/1024)
	//fmt.Printf("NumGC = %v\n", stats.NumGC)
}

func main() {
	// Uncomment this line to disable garbage collection
	// debug.SetGCPercent(-1)

	fmt.Println("Begin")
	for i := 0; i <= 500; i++ {
		print(i)
		data := make([]byte, (1<<20)/80) // Allocate 0.0125MB
		retained = [][]byte{data}        // Reset retained to only hold the latest allocation
	}
	printMemStats()
	println(len(retained))
}
