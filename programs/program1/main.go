package main

import (
	"fmt"
	"runtime"
	"time"
)

//go:wasmimport yourmodulename add

func boring(msg string) {
	for i := 0; i < 2000; i++ {
		if i%20 == 0 {
			fmt.Println(msg, i)
		}
	}
}

func main() {
	runtime.Gosched()
	go boring("1 :")
	go boring("2 :")
	// This line of code is a bit weird
	// In a coperative model it wont run until after 1 and 2
	// But in a shared model the program will execute this and exit once the time is up
	time.Sleep(1 * time.Millisecond)
}
