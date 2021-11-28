#include <stdio.h>

/* Diretivas de Compilação em C - #ifndef (senão está definido) -
 *
 * */

//#define PI 3.14567 // constante, diferente da variável uma constante não muda é fixa.
// ## vamos então supor que #define não consta.
// abaixo consta ifndef que será "criado/definido".

#ifndef PI
#define PI 3.14567
#endif

int main(){

	int valor = 5; //variável

	valor = 467;// valor varia

	printf("O valor é %d.\n", valor);

	//PI = 7.29 - o programa não aceita, mudar a constante durante a programação.

	printf("PI vale %.5f.\n", PI);

	return 0;
}
