#include <stdio.h>

/* Recursividade
 * Recursividade é o ato de uma função chamar a si mesma.
 * Desvantagem: senão tiver um break, pode travar o programa.
 * Então é importante que a função recursiva tenha uma condição de parada.*/

int contador = 1; // declarar a variável fora, ele vai somando. Se fosse dentro iria voltar em 1.
                  // ou seja 1 + 1 = 2 e depois volta no 1.

int main(){

	printf("Imprimindo algo... %d.\n", contador);
	contador = contador + 1;

	main(); //recursivo
	// nesse caso fica imprimindo, em alta velocidade ...
	return 0;
}
