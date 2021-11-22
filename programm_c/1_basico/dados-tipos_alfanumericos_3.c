#include <stdio.h>
#include <stdlib.h>
/*Tipo de Dados #Alfanuméricos parte 3
  Caracteres; quando utilizamos aspas simples 'a' char %c
  Strings; ##OBS: Na linguagem C, não existe o tipo de dado String ## Uma String é o conjunto de caracteres!*/

int main(){
	//Terceira Parte sobre Dados Alfanuméricos - Strings %s
	char nome[50]; //declaração de uma string em C ##OBS: nesse caso vai até 49 caracteres.
	printf("Qual é o seu nome?\n");
	fflush(stdout);
	gets(nome);

	printf("Seja Bem-vindo %s!", nome);

	return 0;
}
