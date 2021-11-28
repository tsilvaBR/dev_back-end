#include <stdio.h>
#include <stdlib.h> // essa biblioteca é usada para esse tipo de função!
/* Parte 3
 * De acordo com exemplo anterior de malloc, que era variável estática.
 * Pode ocorrer da variável ser dinâmica, de acordo com usuário optar. E ai não sabemos o quanto de memória vai precisar.
 * Onde entra a função MALLOC.
 * A partir do momento que fazemos alocação de memória, ela fica alocada independente do programa encerar ou não.
 * Por isso precisamos sempre liberar memória.*/

int main(){
	int qtd, *p;

	printf("Informe a quantidade de elementos para o vetor: ");
	fflush(stdout);
	scanf("%d", &qtd);

	//int bytes = qtd * sizeof(int); // 1ª opção para se fazer esse programa.
	                                // 1 int = 4 bytes então qtd = 3, fica: 3 * 4 = 12 bytes que ocupa na memória.

	p = (int*)malloc(qtd * sizeof(int));
	//p = (int*)malloc(bytes); // Continuação da 1ª opção

	for(int i = 0; i < qtd; i++){
		printf("Informe o valor para a posição %d do vetor: ", i);
		fflush(stdout);
		scanf("%d", &p[i]);
	}
	for (int i = 0; i < qtd; i++){
		printf("No vetor 'numeros[%d]' está o valor: %d.\n", i, p[i]);
	}

	qtd = qtd *sizeof(int); // 2ª opção para se fazer esse programa.

	//printf("A variável 'p' ocupa %ld bytes em memória.\n", sizeof(p)); //print final %ld e sizeof(p) se for 1ª opção.
	printf("A variável 'p' ocupa %d bytes em memória.\n", qtd); // 2ª opção
	printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * sizeof(int)); //3ª opção e a mais simples.

	//liberar a memória:
	free(p); // passando como parâmetro o próprio elemento que foi alocado no caso o 'p'. Com isso,
	         // outros programas podem utilizar a memória.
	p = NULL; // medida de segurança. para que não seja reutilizado. Um virus pode resgatar e invadir o programa.

	return 0;
}
