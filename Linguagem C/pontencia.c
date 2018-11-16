#include <stdio.h>

void potencia (int a, int b){
	int resultado = 1;

	for(int i = 0; i < b; i++){
		resultado = resultado * a;
	}
	printf("O resultado de %d elevado a %d é %d\n", a, b, resultado );
}

int main (){

	potencia(2,3);

}
