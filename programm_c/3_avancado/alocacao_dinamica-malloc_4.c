#include <stdio.h>
#include <stdlib.h> // essa biblioteca é usada para esse tipo de função!
/* Parte 4
 * Ficou faltando um item importante!
 * Antes de executar o programa, precisamos verificar se tem memória disponível
 * Para isso fazemos um IF.*/

int main(){
	int qtd, *p;

	printf("Informe a quantidade de elementos para o vetor: ");
	fflush(stdout);
	scanf("%d", &qtd);

	p = (int*)malloc(qtd * sizeof(int));

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
	}else{
		printf("ERRO!: Memória insuficiente!!!");
	}

	//liberar a memória:
	free(p);
	p = NULL;

	return 0;
}
