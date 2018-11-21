/*Escreva a mesma função de potencia que você fez na aula anterior, só que dessa vez,
 o resultado deve ser salvo em um inteiro que vem na lista de parâmetros da função. 
 Para isso, claro, você precisará receber um ponteiro de inteiro:*/

#include <stdio.h>

void pontencia(int *resultado, int a, int b){
	for (int i = 0; i <= b; ++i)
	{
		resultado = a * a;
		printf("O resultado de %d elevado a %d é: %d\n", a, b, resultado );
	}
	
}


int main(){

int resultado;
potencia(&resultado, 10, 5);

}