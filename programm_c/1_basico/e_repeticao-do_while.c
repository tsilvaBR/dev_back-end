#include<stdio.h>
#include<stdlib.h>
//Estrutura de Repetição DO WHILE (faça enquanto)
/*Faça um programa, no qual receba e some os números
 * inteiros até que a entrada seja 0 e apresente a soma no final
 * A diferença entre WHILE/FOR e testam a condição do laço(ou loop) no começo
 * já DO WHILE testa a condição no final do laço (ou loop) */

int main(){
	int numero, soma = 0;
	do{
		printf("Informe um número: ");
		fflush(stdout);
		scanf("%d", &numero);

		soma = soma + numero;
	}
	while(numero != 0);

	printf("A soma é %d.\n", soma);

	return 0;
}
