#include <stdio.h>
/* Incrementar
   valor++ significa que: valor = valor + 1
   valor-- significa que: valor = valor - 1
   ## PONTEIROS ##
   Quando falamos de ponteiros, falamos de manipulação do endereço de memória.
   & ou * indica ponteiros.
   */

//endereço de memório com parâmetro de entrada.
void incrementa(int* contador){//é nosso endereço de memória contador.
	printf("Antes de incrementar.1\n");
	printf("O contador vale %d.\n", (*contador)); // valor
	printf("O endereço de memória é %d.\n", contador); //endereço de memória

	printf("Depois de incrementar. 1\n");
	printf("O contador vale %d.\n", ++(*contador));
	printf("O endereço de memória é %d.\n", contador);
}

int main(){
	// quando declaramos uma variável, a linguagem C
	// aloca um espaço em memória para colocar este valor.
	int contador = 10; // variável contador

	printf("Antes de incrementar. 2\n");
	printf("O contador vale %d.\n", contador);
	printf("O endereço de memória é %d.\n", &contador);

	//cópia por valor
	incrementa(&contador);

	printf("Depois de incrementar. 2\n");
	printf("O contador vale %d.\n", contador);
	printf("O endereço de memória é %d.\n", &contador);

	return 0;
}
