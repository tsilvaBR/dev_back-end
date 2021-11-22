#include<stdio.h>
#include<stdlib.h>
//Estrutura de Repetição FOR (para)
/*Faça um programa, no qual receba e some os número
 * inteiros até que a entrada seja 0*/
int main(){
	//variáveis
	int numero, soma = 0;

	for(int i = 0; i < 5; i++){ /* inicialização; critério de parada; forma de incremento
	 	 	 	 	 	 	 	   para int i iniciando em 0; enquanto i < 5; incrementa o i em 1*/
		//entrada
		printf("Informe um número [%d]: ", i);
		fflush(stdout);
		scanf("%d", &numero);

		//processamento
		soma = soma + numero;
	}
	//saida
	printf("A soma é %d.\n", soma);

	return 0;
}
