#include <stdio.h>
#include <stdlib.h>

// Alocação Dinâmica - CALLOC
// Pode se dizer que MALLOC para CALLOC só muda as iniciais... a função escrita é a igual (programar).
// Malloc [3][6][5] - não remove o lixo da memória, mantendo o lixo
// Calloc [3][6][5] - zera o espaço da memória. [0][0][0]

int main(){
	int *p;

	p = (int*)calloc(3, sizeof(int)); // do malloc qtd * sizeof(int) já o calloc qtd, sizeof(int)

	if(p){
		p[0] = 6;
		p[1] = 3;
		p[2] = 7;

		printf("A variável 'p' ocupa %ld bytes em memória.\n", 3 * sizeof(int));
		printf("Valor de p[0] = %d.\n", p[0]);
		printf("Valor de p[1] = %d.\n", p[1]);
		printf("Valor de p[2] = %d.\n", p[2]);
	}else{
		printf("ERRO!: Memória insuficiente!!!");
	}

		//liberar a memória:
	//free(p);
	//p = NULL;

	return 0;

}
