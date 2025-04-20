package main

import (
	"fmt"
	"runtime"
	"sync"
	"time"
	"unsafe"
)

//go:linkname AllocBytes runtime.AllocBytes
func AllocBytes(size uintptr) unsafe.Pointer

//go:linkname McOnPointer runtime.McOnPointer
func McOnPointer(region unsafe.Pointer, f func(ptr unsafe.Pointer))

//go:linkname RegisterTask runtime.RegisterTask
func RegisterTask(name string)

func incrementRawPointerValue(rawPtr unsafe.Pointer) {
	x := (*uint32)(rawPtr)
	for i := 0; i < 2000; i++ {
		var y = *x + 1
		runtime.Gosched()
		*x = y
	}
}

func incrementRawPointerValueSafe(rawPtr unsafe.Pointer) {
	McOnPointer(rawPtr, func(ptr unsafe.Pointer) {
		x := (*uint32)(ptr)
		for i := 0; i < 2000; i++ {
			var y = *x + 1
			runtime.Gosched()
			*x = y
		}
	})
}

func main() {
	const size = 64
	const val uint32 = 0xDEADBEEF

	ptr := AllocBytes(size)
	println("Allocated memory at:", ptr)

	numWords := int(size / 4) // number of 32-bit words

	// Write values to Dead Beef for easy visualisation
	for i := 0; i < numWords; i++ {
		offset := unsafe.Pointer(uintptr(ptr) + uintptr(i*4))
		*(*uint32)(offset) = val
	}

	// Print memory table
	// printMemoryTable(ptr, numWords, 4)

	// Set Base to 0x0 to allow us to create a race condition
	*(*uint32)(ptr) = 0

	var wg sync.WaitGroup
	wg.Add(2)

	go func() {
		RegisterTask("Unsafe1")
		defer wg.Done()
		incrementRawPointerValue(ptr)
	}()

	go func() {
		RegisterTask("Unsafe2")
		defer wg.Done()
		incrementRawPointerValue(ptr)
	}()

	wg.Wait() // Wait for both goroutines to finish
	print("Not Synced : ")
	printMemoryTable(ptr, 4, 4)

	// Set Base to 0x0 lets defeat the race condition
	*(*uint32)(ptr) = 0

	var wg2 sync.WaitGroup
	wg2.Add(2)

	go func() {
		RegisterTask("Safe1")
		defer wg2.Done()
		incrementRawPointerValueSafe(ptr)
	}()

	go func() {
		RegisterTask("Safe2")
		defer wg2.Done()
		incrementRawPointerValueSafe(ptr)
	}()

	wg2.Wait() // Wait for both goroutines to finish
	print("Synced : ")
	printMemoryTable(ptr, 4, 4)

	time.Sleep(50 * time.Millisecond)
}

func printMemoryTable(ptr unsafe.Pointer, numWords int, cols int) {
	for i := 0; i < numWords; i++ {
		offset := unsafe.Pointer(uintptr(ptr) + uintptr(i*4))
		val := *(*uint32)(offset)
		fmt.Printf("0x%08X  ", val)
		if (i+1)%cols == 0 {
			fmt.Println()
		}
	}
	if numWords%cols != 0 {
		fmt.Println()
	}
}
