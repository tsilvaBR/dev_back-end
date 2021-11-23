#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	/*   0   1   2   3   4
	 * ---------------------
	 * | 1 | 2 | 3 | 4 | 5 |
	 * ---------------------

	 int (inteiro) = 4 bytes
	 bit 0 ou 1 = 1 byte (em binário: 0000 0001) que é um conjunto de 8 bits.
	 então int (4 bytes) é: 0000 0000 0000 0000 0000 0000 0000 0001 #em binário#
	 */
	int valores[5] = {1, 2, 3, 4, 5}; // representado acima.

	for(int i = 0; i < 5; i++){
		printf("O valor %d tem %ld bytes.\n", valores[i], sizeof(valores[i]));
	} //resultado será 4 bytes, pois todos são do tipo inteiro.
	printf("O array valores possui %ld bytes.\n", sizeof(valores)); //irá somar o total de bytes dos vetores.

	printf("valores[0] vale %d e o endereço de memória é %p.\n", valores[0], valores[0]);

	printf("*(valores) vale %d e o endereço de memória é: %p.\n", *(valores), *(valores)); // igual a programação de cima,
	                                                                                       // o resultado final é o mesmo.
	printf("*(valores+1) vale %d e o endereço de memória é: %p.\n", *(valores+1), *(valores+1));
	printf("*(valores+2) vale %d e o endereço de memória é: %p.\n", *(valores+2), *(valores+2));
	printf("*(valores+3) vale %d e o endereço de memória é: %p.\n", *(valores+3), *(valores+3));
	printf("*(valores+4) vale %d e o endereço de memória é: %p.\n", *(valores+4), *(valores+4));
	return 0;
}
