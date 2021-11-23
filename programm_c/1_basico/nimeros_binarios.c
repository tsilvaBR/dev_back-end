#include <stdio.h>
/* Números Binários
   Na Linguagem C tem a opção de trabalhar com números binários (considerando assim baixo nível).
   Um número X equivale a bit e os bits equivalem a bytes. Exemplos
   Número Decimal = 0 - Binário = 0
   Número Decimal = 1 - Binário = 1
   Número Decimal = 2 - Binário = 10
   Número Decimal = 3 - Binário = 11
   Número Decimal = 4 - Binário = 100

   Arquitetura de computadores:
   8 bits  10000000 [equivale a 1 byte] = a número máximo 256 (2 ** 8)
   16 bits 1000000000000000
   32 bits 10000000000000000000000000000000
   64 bits 10000000000000000000000000000000000000000000000000000000000

   ### Na Linguagem C, um dado do tipo int guarda até 4 bytes (4294967295). ###

   A Linguagem C permite que façamos operações em "baixo nível" com variáveis do tipo char, int e long int
   Operador ~  NOT
   Operador >> Deslocamento de bits à direita
   Operador << Deslocamento de bits à esquerda
   Exemplo: int numero = 2; //A representação binária do número 2 é: 0000 0010
   ~    1111 1101 = 253
   >> 1 0000 0001 = 1 (o 1 nesse caso é o deslocamento de casa, ou seja quantas vezes vou deslocar para direita)
   << 2 0000 1000 = 8


 * */

int main(){
	int valor = 2; //int valor iniciado em 2 Representação binária do número 2 é: 0000 0010
	printf("Valor Original vale %d.\n", valor); //imprimir o "valor originial" antes do deslocamento ou negação.

	//deslocamento de bits para esquerda
	valor = valor << 2;
	printf("Valor com deslocamento de bits p/ esquerda vale %d.\n", valor);

	valor = 2; //a última função foi deslocamento de bits, senão colocar o "valor original" imprimirá outro valor.
	//deslocamento de bits para direita
	valor = valor >> 1;
	printf("Valor com deslocamento de bits p/ direita vale %d.\n", valor);

	valor = 2;
	//negação ~ do valor (bits)
	valor = ~valor;
	printf("Valor em bits na Negação vale %d.\n", valor);

	return 0;
}
