#include <stdio.h>
/* Funções - Usando Funções
  */

void mensagem();

int soma(int num1, int num2){

	int res = num1 + num2;
	return res;
}

void proximo_char(char letra){
	printf("%c", letra+1);
}

int main(){ // funçãoo MAIN estando em último, antes das funções segundárias.
	char nome[30];
	printf("Olá...");
	fflush(stdout);
	gets(nome);

	mensagem();

	// Outra forma de programar:
	//int retorno = soma(4. 6);
	//printf("Retorno = %d", retorno);
	printf("Retorno = %d.\n", soma(4, 6));

	char cara = 97; //Conforme a Tabela ASCII
	proximo_char(cara);
	return 0;
}

void mensagem(){
	printf("Seja Bem-vindo!\n");
}
