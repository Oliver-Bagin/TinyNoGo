package main

func add(x, y uint32) uint32 {
    return x + y
}

func main() {
    result := add($10, 32)
    t := 2
    // a := t == 2 ? "A" : "B"
    // q := t == 2 ? "A" : (t == 1 ? "B" : "C")
    // z := t == 2 ? "A" : t == 1 ? "B" : "C"
    // x := t == 2 ? (t == 1 ? "A" : "B") : "C"
    y := t == 2 ? t == 1 ? "A" : "B" : "C"
    // e := (t == 1 ? true : false) ? "A" : "C"
    // ww = t == 1 ? true : false ? "A" : "C"

    // test triply nested
    println("Result from JS:", result)
    // println("Result from JS:", a)
    // println("Result from JS:", q)
    // println("Result from JS:", z)
    // println("Result from JS:", x)
    println("Result from JS:", y)
    // println("Result from JS:", e)
    // println("Result from JS:", ww)
}
