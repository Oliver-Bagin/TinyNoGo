package runtime

import (
	"internal/task"
)

const schedulerDebug = true

var mainExited bool

var offset = ticksToNanoseconds(ticks())

//export schedular_log
func schedular_log(x string)

// taskNames holds each Task’s registered name.
var taskNames = make(map[*task.Task]string)

// RegisterTask assigns the given name to the current Task.
func RegisterTask(name string) {
	t := task.Current()
	taskNames[t] = name
}

// TaskName returns the name you previously registered for t (or "" if none).
func TaskName(t *task.Task) string {
	return taskNames[t]
}

// u64ToString converts a non‑negative integer to its base‑10 string.
// Uses only built‑in ops and a fixed buffer.
func u64ToString(u uint64) string {
	if u == 0 {
		return "0"
	}
	// max 20 digits for 64‑bit
	var buf [20]byte
	i := len(buf)
	for u > 0 {
		i--
		buf[i] = byte('0' + u%10)
		u /= 10
	}
	return string(buf[i:])
}

// FormatElapsed returns the elapsed time since offset as “x.xxx s”
// with exactly three decimal places and no reliance on fmt, strconv, or strings.
func FormatElapsed() string {
	// compute elapsed nanoseconds as signed
	ns := int64(ticksToNanoseconds(ticks())) - offset
	if ns < 0 {
		ns = -ns
	}

	// whole seconds
	secs := ns / 1e9
	// three‐digit millisecond fraction (0..999)
	msFrac := (ns % 1e9) / 1e6

	// convert integer parts to decimal strings
	secStr := u64ToString(uint64(secs))

	// pad msFrac to exactly 3 digits
	var pad string
	if msFrac < 10 {
		pad = "00"
	} else if msFrac < 100 {
		pad = "0"
	}
	fracStr := u64ToString(uint64(msFrac))

	// assemble final string
	return secStr + "." + pad + fracStr + " s"
}

// Simple logging, for debugging.
func scheduleLog(msg string) {
	schedular_log("---" + msg + FormatElapsed())
	if schedulerDebug {
		println("---" + msg + FormatElapsed())
	}
}

// Simple logging with a task name (or pointer) for debugging.
func scheduleLogTask(msg string, t *task.Task) {
	if !schedulerDebug {
		return
	}

	// Try to look up a human‐readable name for t
	if name := TaskName(t); name != "" {
		// found a name, print that
		schedular_log("---" + msg + name + FormatElapsed())
	} else {
		// no name registered, print the pointer value
		schedular_log("---" + msg + "Unregistered" + FormatElapsed())
	}
}

// Simple logging with a channel and task pointer.
func scheduleLogChan(msg string, ch *channel, t *task.Task) {
	if schedulerDebug {
		schedular_log("---" + msg + "ch" + "Unregistered")
	}
}

// Goexit terminates the currently running goroutine. No other goroutines are affected.
func Goexit() {
	panicOrGoexit(nil, panicGoexit)
}

//go:linkname fips_getIndicator crypto/internal/fips140.getIndicator
func fips_getIndicator() uint8 {
	return task.Current().FipsIndicator
}

//go:linkname fips_setIndicator crypto/internal/fips140.setIndicator
func fips_setIndicator(indicator uint8) {
	// This indicator is stored per goroutine.
	task.Current().FipsIndicator = indicator
}
