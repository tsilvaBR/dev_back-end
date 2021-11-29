#include <stdio.h>
/* O algoritmo Shell Sort trabalha com outro algoritmo já conhecido: o Insert Sort,
 * mas fazendo uma separação em grupos menores e ordenando-os, e assim ordenando todo o vetor.*/

void shell_sort(int vetor[], int tam){
	//variável auxiliar
	int grupo = 1;

	//gerar o tamanho do grupo de acordo com o tamanho do vetor
	while(grupo < tam){
		grupo = 3 * grupo + 1;
	}

	//varrer o vetor enquanto houver grupos para ordenar
	while(grupo > 1){
		//dividir o grupo em 3 partes ##pode ser em mais partes
		grupo /= 3;
		//correr por cada grupo
		for(int i = grupo; i < tam; i++){
			int troca = vetor[i];
			int j = i - grupo;
			//realizar a troca
			while(j >= 0 && troca < vetor[j]){
				vetor[j + grupo] = vetor[j];
				j -= grupo;
			}
			vetor[j + grupo ] = troca;
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

	//Função de ordenação utilizando Shell Sort
	shell_sort(vetor, 6);

	printf("{");

	//Apresentar vetor ordenado
	for(int i = 0; i < 6; i++){
		printf("%d ", vetor[i]);
	}

	printf("}");
	printf(" - Vetor Ordenado, com Shell Sort.");

	return 0;
}
