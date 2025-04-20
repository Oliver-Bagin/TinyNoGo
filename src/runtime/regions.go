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

// -------- Bakery Algorithm Per-Pointer Locking --------

const maxThreads = 64

type bakeryLock struct {
	choosing [maxThreads]bool
	tickets  [maxThreads]uint32
}

var (
	threadCounter int
	threadIDs     [maxThreads]int
	lockMap       = make(map[unsafe.Pointer]*bakeryLock)
)

// getThreadID assigns a unique slot (assumes fixed # of goroutines for now)
//
// Stop the world - This runs atomically
func getThreadID() int {
	for i := 0; i < maxThreads; i++ {
		if threadIDs[i] == 0 {
			threadIDs[i] = 1
			return i
		}
	}
	return 0
}

// getLockForRegion gets or creates a bakeryLock for a region
//
// Stop thw world - this runs atomically
func getLockForRegion(ptr unsafe.Pointer) *bakeryLock {
	lock, ok := lockMap[ptr]
	if !ok {
		lock = &bakeryLock{}
		lockMap[ptr] = lock
	}
	return lock
}

//go:interleave
func lamportLock(lock *bakeryLock, id int) {
	lock.choosing[id] = true

	var max uint32 = 0
	for i := 0; i < maxThreads; i++ {
		if lock.tickets[i] > max {
			max = lock.tickets[i]
		}
	}
	lock.tickets[id] = max + 1
	lock.choosing[id] = false

	for j := 0; j < maxThreads; j++ {
		if j == id {
			continue
		}
		for lock.choosing[j] {
			Gosched()
		}
		for {
			tj := lock.tickets[j]
			if tj == 0 || (lock.tickets[id] < tj) || (lock.tickets[id] == tj && id < j) {
				break
			}
			Gosched()
		}
	}
}

func lamportUnlock(lock *bakeryLock, id int) {
	lock.tickets[id] = 0
}

//go:export McOnPointer  //
//go:used               //
func McOnPointer(region unsafe.Pointer, f func(ptr unsafe.Pointer)) {
	id := getThreadID()
	lock := getLockForRegion(region)
	lamportLock(lock, id)
	f(region)
	lamportUnlock(lock, id)
}

func RuntimeMC(f func()) {
	id := getThreadID()
	lock := getLockForRegion(nil)
	lamportLock(lock, id)
	f()
	lamportUnlock(lock, id)
}
