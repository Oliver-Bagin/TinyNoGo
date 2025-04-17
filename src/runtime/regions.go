//go:build scheduler.tasks || scheduler.asyncify || scheduler.nc || scheduler.ncd

package runtime

import (
	"unsafe"
)

//go:export AllocBytes  //
//go:used               //
func AllocBytes(size uintptr) unsafe.Pointer {
	return alloc(size, nil)
}

// -------- Bakery Algorithm Globals --------

const maxThreads = 64

var (
	choosing [maxThreads]bool
	tickets  [maxThreads]uint32
)

var threadCounter int
var threadIDs [maxThreads]int

// getThreadID assigns a unique slot (assumes fixed # of goroutines for now)
func getThreadID() int {
	// Just round-robin slot assignment, not thread-local, for simplicity
	for i := 0; i < maxThreads; i++ {
		if threadIDs[i] == 0 {
			threadIDs[i] = 1
			return i
		}
	}
	// fallback to first slot
	return 0
}

func lamportLock(id int) {
	choosing[id] = true

	// Find max ticket
	var max uint32 = 0
	for i := 0; i < maxThreads; i++ {
		if tickets[i] > max {
			max = tickets[i]
		}
	}
	tickets[id] = max + 1
	choosing[id] = false

	for j := 0; j < maxThreads; j++ {
		if j == id {
			continue
		}

		// Wait if j is choosing a ticket
		for choosing[j] {
			Gosched()
		}

		// Wait if j has a lower ticket or same ticket but lower ID
		for {
			tj := tickets[j]
			if tj == 0 || (tickets[id] < tj) || (tickets[id] == tj && id < j) {
				break
			}
			Gosched()
		}
	}
}

func lamportUnlock(id int) {
	tickets[id] = 0
}

//go:export McOnPointer  //
//go:used               //
func McOnPointer(region unsafe.Pointer, f func(ptr unsafe.Pointer)) {
	id := getThreadID()
	lamportLock(id)
	f(region)
	lamportUnlock(id)
}
