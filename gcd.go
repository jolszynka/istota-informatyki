package main

import "fmt"

// GCD calculates the greatest common divisor using Euclidean algorithm
func GCD(a, b int) int {
    for b != 0 {
        a, b = b, a%b
    }
    return a
}

func main() {
    fmt.Println("Euclidean Algorithm - GCD")
    fmt.Println("=========================")
    
    fmt.Printf("GCD(48, 18) = %d\n", GCD(48, 18))
    fmt.Printf("GCD(100, 35) = %d\n", GCD(100, 35))
    fmt.Printf("GCD(1071, 462) = %d\n", GCD(1071, 462))
    fmt.Printf("GCD(270, 192) = %d\n", GCD(270, 192))
}