package main

import (
	"fmt"
	"math"
)

func main() {
	//Declarando as variáveis
	var a, b, c float32

	//Lendo os valores
	fmt.Print("Informe o valor de a: ")
	fmt.Scanln(&a)
	fmt.Print("Informe o valor de b: ")
	fmt.Scanln(&b)
	fmt.Print("Informe o valor de c: ")
	fmt.Scanln(&c)

	//Verificação para ver se a é diferente de 0
	if a == 0 {
		fmt.Print("A variável a precisa ser diferente de zero para a equação ser do segundo grau")
	} else {
		//Calculo do delta
		delta := (b * b) - (4 * a * c)

		if delta > 0 {
			root1 := (-b + float32(math.Sqrt(float64(delta)))) / (2 * a)
			root2 := (-b - float32(math.Sqrt(float64(delta)))) / (2 * a)
			fmt.Print("As raízes da função são: ", root1, " e ", root2)
		} else if delta == 0 {
			root := -b / (2 * a)
			fmt.Print("A equação possui as duas raízes iguais a: ", root)
		} else {
			fmt.Print("A equação não possui raízes reais")
		}
	}
}
