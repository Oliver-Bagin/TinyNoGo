package main

import (
	"fmt"
	"sync"
	_ "unsafe"
)

//go:linkname RegisterTask runtime.RegisterTask
func RegisterTask(name string)

func boring(msg string, wg *sync.WaitGroup) {
	defer wg.Done()
	RegisterTask(msg)
	for i := 0; i <= 2000; i++ {
		fmt.Println(msg, i)
	}
}

func main() {
	var wg sync.WaitGroup
	wg.Add(6)

	go boring("R1", &wg)
	go boring("R2", &wg)
	go boring("R3", &wg)
	go boring("R4", &wg)
	go boring("R5", &wg)
	go boring("R6", &wg)

	wg.Wait()
}
