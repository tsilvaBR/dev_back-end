#include <stdio.h>
#include <stdlib.h>

/* Alocação Dinâmica - REALLOC
 * Realocação de memória de um MALLOC ou CALLOC.
 *
 * */

int main(){
	int qtd, *p;

	printf("Informe a quantidade de elementos para o vetor: ");
	fflush(stdout);
	scanf("%d", &qtd);

	p = (int*)malloc(qtd * sizeof(int)); // exemplo com MALLOC, mas poder ser com CALLOC também...

	if(p){

		for(int i = 0; i < qtd; i++){
			printf("Informe o valor para a posição %d do vetor: ", i);
			fflush(stdout);
			scanf("%d", &p[i]);
		}
		for (int i = 0; i < qtd; i++){
			printf("No vetor 'numeros[%d]' está o valor: %d.\n", i, p[i]);
		}

		printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * sizeof(int));

		printf("Informe a quantidade de elementos para o vetor: ");
		fflush(stdout);
		scanf("%d", &qtd);

		p = (int*)realloc(p,qtd * sizeof(int)); // os parâmetros de REALLOC é uma mistura com MALLOC e CALLOC

		if(p){
			printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * sizeof(int));
		}else{
			printf("ERRO!: Memória insuficiente!!!");
		}

	}else{
		printf("ERRO!: Memória insuficiente!!!");
	}

	//liberar a memória:
	free(p);
	p = NULL;

	return 0;
}
