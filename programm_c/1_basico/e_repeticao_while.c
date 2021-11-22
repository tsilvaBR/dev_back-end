#include<stdio.h>
#include<stdlib.h>
//Estrutura de Repetição WHILE (enquanto)
/*Faça um programa, no qual receba e some os números
 * inteiros até que a entrada seja 0 e apresente a soma no final
 * A diferença entre FOR e WHILE é que no FOR tem limite de loop, WHILE só para pelo critério PARADA */

int main(){
	int numero, soma = 0;

	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &numero);

	while(numero != 0){ /*critério de parada é 0 ou seja informando qualquer número positivo ou
						  negativa diferente de 0, programa verifica e executa a função ou comando*/
		soma = soma + numero;
		printf("Informe um número: ");
		fflush(stdout);
		scanf("%d", &numero);
	}

	printf("A soma é %d\n", soma);

	return 0;
}
