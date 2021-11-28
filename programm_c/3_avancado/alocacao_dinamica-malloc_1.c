#include <stdio.h>
#include <stdlib.h> // essa biblioteca é usada para esse tipo de função!
/* ##### Alocação dinâmica de Memória em C #####
  Funções para alocação de memória - Malloc
  Para entender vamos por três parte.
  Parte 1
  Em exemplos/exercícios anteriores estavamo trabalhando com variável estaticas. Abaixo segue exemplo:*/

int main(){ //até apenas para relembrar.

	int numero = 9; //já sabemos que int = 4 bytes em memória.

	printf("A variável 'numero' vale %d e ocupa %ld bytes em memória.\n", numero, sizeof(numero)); // resultado:
	                                                                                               // numero 9 e ocupa 4 bytes em memória.

	return 0;
}
