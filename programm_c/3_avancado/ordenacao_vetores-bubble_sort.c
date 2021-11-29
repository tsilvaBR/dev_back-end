#include <stdio.h>

/* Conhecido também como algoritmo de troca, ou algoritmo de bolha, é um algoritmo de ordenação
 * simples, sendo que ideia é percorrer a vetor várias vezes, e cada vez, 'flutuar' o maior elemento
 * da sequência. Esse movimento lembra a forma de como as bolhas em um reservatório de água procuram
 * seu próprio nível.
 * Esse método, apesar de considerado eficaz,, acaba passando várias vezes pelas mesmas posições do
 * vetor no pior dos casos, executando o loop novamente, voltando ao início e percorrendo o vetor
 * até finalizar. Não é recomendado para programas que precisam de velocidade. */

void bubble_sort(int vetor[], int tam){
	//variável auxiliar
	int proximo = 0;

	//percorrer todo o vetor externo
	for(int i = 0; i < tam; i++){
		//trabalhar com os próximo elementos
		for(int j = 0; j < (tam - 1); j++){
			//Ocorre a troca
			if(vetor[j] > vetor[j+1]){
				proximo = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = proximo;
			}
		}
	}
}

int main(){
	//vetor desordenado
	int vetor[6] = {8, 3, 1, 42, 12, 5};

	printf("{");

	//Apresentar vetor ordenado
	for(int i = 0; i < 6; i++){
		printf("%d ", vetor[i]);
	}

	printf("}");
	printf(" - Vetor Desordenado.\n");

	//Função de ordenação utilizando Bubble Sort
	bubble_sort(vetor, 6);

	printf("{");

	//Apresentar vetor ordenado
	for(int i = 0; i < 6; i++){
		printf("%d ", vetor[i]);
	}

	printf("}");
	printf(" - Vetor Ordenado, com Bubble Sort.");

	return 0;
}
