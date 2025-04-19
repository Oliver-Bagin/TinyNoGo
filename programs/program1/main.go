package main

import (
	"fmt"
	"time"
	_ "unsafe"
)

//go:linkname RegisterTask runtime.RegisterTask
func RegisterTask(name string)

func boring(msg string) {
	RegisterTask(msg)
	for i := 0; i <= 2000; i++ {
		fmt.Println(msg, i)
	}
}

func main() {
	//runtime.Gosched()
	go boring("R1")
	go boring("R2")
	go boring("R3")
	go boring("R4")
	go boring("R5")
	go boring("R6")
	// This line of code is a bit weird
	// In a coperative model it wont run until after 1 and 2
	// But in a shared model the program will execute this and exit once the time is up
	time.Sleep(50 * time.Millisecond)
}
