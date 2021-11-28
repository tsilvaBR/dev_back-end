#include <stdio.h>
/* Insert Sort
 * Conhecido também como Insertion Sort, é um algoritmo simples, mas eficiente quando usado em
 * vetores pequenos. Basicamente ele percorre um vetor da esquerda para a direita, e conforme avança,
 * vai alinhando os valores da sua esquerda.*/

void insert_sort(int vetor[], int tam){
	int troca;

	//Percorrer todo o vetor
	for(int i = 0; i < tam; i++){
		int proximo = i;

		//Responsável pelas trocas
		while((proximo != 0) && (vetor[proximo] < vetor[proximo - 1])){
			troca = vetor[proximo];
			vetor[proximo] = vetor[proximo - 1];
			vetor[proximo - 1] = troca;
			proximo--;
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

	//Função de ordenação utilizando Insert Sort
	insert_sort(vetor, 6);

	printf("{");

	//Apresentar vetor ordenado
	for(int i = 0; i < 6; i++){
		printf("%d ", vetor[i]);
	}

	printf("}");
	printf(" - Vetor Ordenado.");

	return 0;
}
