#include <stdio.h>
#include <string.h>


void abertura(){
	printf("**********************************\n");
	printf("*        JOGO DE FORCA           *\n");
	printf("**********************************\n\n");

}

void chuta(char chutes[26], int* tentativas){
	char chute;
	scanf(" %c", &chute);

    chutes[(*tentativas)] = chute;
    (*tentativas)++;
}


int main() {
	char palavrasecreta[20];

	sprintf(palavrasecreta, "MELANCIA");  //sprintf é uma função idêntica ao printf, só que ao invés de imprimir na tela ele imprime em uma string (vetor de caracteres) indicada pela variável destino. 

	int acertou = 0; // valor booleana, quer dizer que é falso
	int enforcou = 0; // valor booleana, quer dizer que é falso

	char chutes[26]; // tamanho de 26 por conta da qntd de letras alfabeto
	int tentativas = 0; // essa variavel serve para nos dizer QUANTOS chutes ele ja deu

	abertura();
	
	do {
		for(int i=0; i < strlen(palavrasecreta); i++){ // strlen essa função conta quantos caracteres a string tem, no caso MELANCIA = 8.

			int achou = 0; // booleana é falsa

			//printf("Estou vendo a letra secreta %c\n", palavrasecreta[i] );

			for(int j = 0; j < tentativas; j++){ // a variavel i já existe entao declaramos o j
				//printf("-> Chute %c\n", chutes[j] );
				if(chutes[j] == palavrasecreta[i]){
					achou = 1;
					break;
				}
			}

			if(achou){
				printf("%c ", palavrasecreta[i]);
			} else {
			printf("_ ");
			}
		}

		printf("\n");

	   chuta(chutes, &tentativas);

	} while (!acertou && !enforcou);
}