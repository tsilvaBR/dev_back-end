#include <stdio.h>
#include <stdlib.h>
/* Estrutura de Decisão - Instrução Switch Usado em casos onde 
temos uma estrutura (de decisão) grande ou confusa de if, else, else if
 * #Pseudocódigo
 * Escola(variável)
 * Início
 *     Caso valor1:
 *         Instruções
 *     Caso valor2:
 *         Instruções
 *     Caso valorN:
 * Fim
 *
 * Na Linguagem C
 *
 * switch(variável){
 *     case valor1:
 *         Instruções;
 *         break;
 *     case valor2:
 *         Instruções;
 *         break;
 *     default:
 *         Instruções;
 * }
 */

int main(){
	int valor;

	printf("Digite um valor de 1 a 7: ");
	fflush(stdout);
	scanf("%d", &valor);

	switch(valor) {
	case 1:
		printf("Domingo\n");
		break;
	case 2:
		printf("Segunda-feira\n");
		break;
	case 3:
		printf("Terça-feira\n");
		break;
	case 4:
		printf("Quarta-feira\n");
		break;
	case 5:
		printf("Quinta-feira\n");
		break;
	case 6:
		printf("Sexta-feira\n");
		break;
	case 7:
		printf("Sábado\n");
		break;
	default:
		printf("Valor inválido");
	}
	//system("pause");
}
