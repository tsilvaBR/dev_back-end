#include <stdio.h>
/*Vetores - Parte 2
  Vetor ou Array, é unidimensional exemple char nome[50]
  */
int main(){
	//vetores e inteiros
	int numeros[5]; // De 0 até 4
	numeros[0] = 1;
	numeros[1] = 2;
	numeros[2] = 3;
	numeros[3] = 4;
	numeros[4] = 5;

	//vetores e reais
	float valores[5];
	for(int i = 0; i < 5; i++){
		valores[i] = (float)numeros[i] / (float)2;
	}
	for(int i = 4; i >= 0; i--){
		printf("%d == %.2f\n", numeros[i], valores[i]);
	}

	return 0;
}
