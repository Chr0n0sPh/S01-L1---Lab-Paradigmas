package main

import (
	"fmt"
	"math/rand"
)

func fatorial(n int) int {
	if n == 0 {
		return 1
	}
	return n * fatorial(n-1)
}

func main() {
	num := rand.Intn(11)
	result := fatorial(num)

	fmt.Print("Número gerado: ", num, "\n")
	fmt.Print("Seu fatorial é igual a: ", result)
}
