#include <stdio.h>
/*Vetores - Parte 1
  Vetor ou Array, é unidimensional exemple char nome[50]
  */
int main(){
	//vetores e strings
	char nome[50];
	printf("Qual é o seu nome?\n");
	fflush(stdout);
	gets(nome);
	printf("Olá %s.\n", nome);

	//vetores e caracteres
	char letras[26];
	int contador = 0;
	for(int i = 97; i <= 122; i++){
		letras[contador] = i;
		contador = contador + 1;
	}
	for(int i = 0; i < 26; i++){
		printf("%d == %c\n", letras[i], letras[i]);
	}

	return 0;
}
