#include <stdio.h>

/* Diretivas - Compilando um Programa.
 * Como compilar/executar um programa "na mão". Pelo cmd/terminal podemos compilar.
 * comando:
 * gcc arquivo-fonte (opcional) -o nome-do-programa
 * gcc nome-do-programa.c -o nome-do-programa.exe (a extensão pode ser qualquer nome que aceita tipo .xuxa ou .geek enfim)
 * dando ENTER
 * ./nome-do-programa.exe ENTER e executa!
 * */

int main(){

	int qtd, soma = 0;

	printf("Quantos numeros voce quer somar? ");
	fflush(stdout);
	scanf("%d", &qtd);

	for(int i = 0; i < qtd; i++){
		soma = soma + i * 2 + 3;
	}

	printf("A soma eh: %d.\n", soma);

	return 0;
}
