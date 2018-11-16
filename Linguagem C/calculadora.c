#include <stdio.h>
#define VERDADEIRO 1
#define FALSO 0

/*Implemente uma calculadora que recebe 3 informações: 
Uma operação (1 = soma, 2 = subtração, 3 = divisão, 4 = multiplicação) e dois números. 
Ele então mostra o resultado da operação escolhida entre os dois números.*/

int verifica_operacao(int operacao){
	if((operacao > 0) && (operacao < 5)){
		return VERDADEIRO;

	return FALSO;
	}
}

int main (){

	int operacao;
	float primeiroalgarismo, segundoalgarismo, resultado;

	printf("*******************************\n");
	printf("CALCULADORA DA MANDS\n");
	printf("obs: apenas para operações com 2 números\n");
	printf("*******************************\n");

	printf("Digite qual operação deseja realizar através do Menu:\n");
	printf("1 - SOMA\n");
	printf("2 - SUBTRAÇÃO\n");
	printf("3 - DIVISÃO\n");
	printf("4 - MULTIPLICAÇÃO\n");
	scanf("%d", &operacao);
	printf("Digite o primeiro algarismo:\n");
	scanf("%f", &primeiroalgarismo);
	printf("Digite o segundo algarismo:\n");
	scanf("%f", &segundoalgarismo);

	if (operacao == 1){ // SOMA
		resultado = primeiroalgarismo + segundoalgarismo;
		printf("O resultado é: %.2f\n", resultado);

		return 0;
	}

		if (operacao == 2){ // SUBTRAÇÃO
		resultado = primeiroalgarismo - segundoalgarismo;
		printf("O resultado é: %.2f\n", resultado);

		return 0;
	}

		if (operacao == 3){ // DIVISÃO
		resultado = primeiroalgarismo / segundoalgarismo;
		printf("O resultado é: %.2f\n", resultado);

		return 0;
	}

		if (operacao == 4){ // MULTIPLICAÇÃO
		resultado = primeiroalgarismo * segundoalgarismo;
		printf("O resultado é: %.2f\n", resultado);

		return 0;
	}

	if (verifica_operacao (operacao == 0)){
		printf("Nota inválida. Escolha a operação desejada conforme o Menu de 1 a 4.\n");
	}

}