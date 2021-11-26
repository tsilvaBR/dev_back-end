#include <stdio.h>
/*
 * Struct ## Union
 * Entender o sizeof para chegarmos no assunto Union.*/


int main(){

	int numero = 42; //sizeof = tamanho de %ld = long integer ... Ex.: sizeof(nome_da_variável)
	float nota = 7.9;
	char letra = 'd';
	double media = 3.95;

	printf("A variável 'numero' tem valor %d e ocupa %ld bytes em memória.\n", numero, sizeof(numero));
	printf("A variável 'nota' tem valor %.2f e ocupa %ld bytes em memória.\n", nota, sizeof(nota));
	printf("A variável 'letra' tem valor %c e ocupa %ld bytes em memória.\n", letra, sizeof(letra));
	printf("A variável 'media' tem valor %.2f e ocupa %ld bytes em memória.\n", media, sizeof(media));

	return 0;
}
