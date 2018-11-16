/*Escreva um programa que peça um inteiro ao usuário, e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número até o 10.
Por exemplo, se ele escolher o número 2, o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.*/

#include <stdio.h>

int main (){

	int numero, resultado;

	printf("Digite um número de 0 a 10:\n");
	scanf("%i", &numero);

	printf("A tabuada no número %i é:\n", numero);

	for (int i=0; i<=10; i++){
		resultado = numero * i;
		printf("2x%i = %i\n", i, resultado);
	}
}