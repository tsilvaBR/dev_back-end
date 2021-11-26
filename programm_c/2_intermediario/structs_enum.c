#include <stdio.h>

/*
 * Enum -> Enumeração (relacionado com estrutura de dados)
 * */

enum dias_da_semana{
	segunda,
	terca,
	quarta,
	quinta,
	sexta,
	sabado,
	domingo
};

int main(){
	enum dias_da_semana d1, d2;

	int numeros[5];

	numeros[0] = 1;
	numeros[1] = 3;
	numeros[2] = 5;
	numeros[3] = 7;
	numeros[4] = 9;

	d1 = quinta; // ou 3, pois é indexado ao número

	d2 = 3; // como é indexado, número dentro do índice do enum são válidos
	        // podemos colocar qualquer NÚMERO, pois o programa busca na memória
	        // mas se for string diferente do enum, ocorre ERRO.
	if(d1 == d2){
		printf("Os dias são iguais...\n"); // ou seja quinta é igual a 3.
	}else{
		printf("Os dias não são iguais...\n");
	}
	// a impressão abaixo é a explicação clara sobre imprimir um número mesmo não
	// declarado acima que no entanto busca na memória, e por isso não ocorre ERRO.
	printf("'numero[0]' = %d.\n", numeros[0]);
	printf("'numero[4]' = %d.\n", numeros[4]);
	printf("'numero[14]' = %d.\n", numeros[14]);

	return 0;
}
