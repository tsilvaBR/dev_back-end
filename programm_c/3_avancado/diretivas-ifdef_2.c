#include <stdio.h>

/* Diretivas de Compilação em C - #ifdef (se está definido) - Parte 2 sem #define e/ou #ifndef.
 *
 * */

//#define PI 3.14567 // constante, diferente da variável uma constante não muda é fixa.
// ## vamos então supor que #define não consta.
// abaixo consta ifndef que será "criado/definido".

/*#ifndef PI
#define PI 3.14567
#endif*/ // então para entender melhor, tiramos o ifndef. O resultado é, que o
         //programa não executa. Nesse caso, o printf (valor) será o único executado.

int main(){

	int valor = 5; //variável

	valor = 467;// valor varia

	printf("O valor é %d.\n", valor);

	//PI = 7.29 - o programa não aceita, mudar a constante durante a programação.

	//printf("PI vale %.5f.\n", PI);

#ifdef PI // Já ifdef, se PI está definido então executa para mim o printf(abaixo):
	printf("O Valor de PI é: %.5f.\n", PI); // E o printf() não será executado, caso, o PI não estiver definido.
#endif // diretiva que fecha/finaliza o IF.

	return 0;
}
