#include <stdio.h>
#include <stdlib.h>

/* Alocação Dinâmica - Em matrizes (bi ou multidimensionais).
 * Parte 1
 * Já vimos em vetores (arrays unidimensionais) como funciona a alocação dinâmica, sendo assim exemplo
 * abaixo para relembrar.
 * Exemplo sendo um vetor, feitos em exemplos anteriores, acessamos via índice. OK!
 * Mas e quando precisamos fazer o acesso via array multidimensional, veremos na parte 2.*/

int main(){
	int *p, qtd = 3;

	p = (int*)malloc(qtd * sizeof(int));

	p[0] = 3;
	p[1] = 6;
	p[2] = 9;

	printf("Valor p[0] é %d.\n", p[0]);
	printf("Valor p[1] é %d.\n", p[1]);
	printf("Valor p[2] é %d.\n", p[2]);

	free(p);
	p = NULL;

	return 0;
}
