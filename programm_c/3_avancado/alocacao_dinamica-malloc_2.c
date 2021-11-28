#include <stdio.h>
#include <stdlib.h> // essa biblioteca é usada para esse tipo de função!
/* Parte 2
   Agora com array, estático.
   o resultado: 12 bytes, pois 3(int)*4(bytes de int), int numeros[3]*sizeof(numeros[i])
   */

int main(){

	int numeros[3]; // relembrado que: vai de 0 ... até ... n-1 -> ou seja, vai de 0 ... 2
	numeros[0] = 55;
	numeros[1] = 43;
	numeros[2] = 2;

	printf("A variável 'numeros[0]' vale %d e ocupa %ld bytes em memória.\n", numeros[0], sizeof(numeros[0]));//resultado numero 55 e ocupa 4 bytes
	printf("A variável 'numeros[1]' vale %d e ocupa %ld bytes em memória.\n", numeros[1], sizeof(numeros[1]));//resultado numero 43 e ocupa 4 bytes
	printf("A variável 'numeros[2]' vale %d e ocupa %ld bytes em memória.\n", numeros[2], sizeof(numeros[2]));//resultado numero 2 e ocupa 4 bytes
	printf("A variável 'numeros' ocupa %ld bytes em memória.\n", sizeof(numeros)); // resultado 12 bytes

	return 0;
}
