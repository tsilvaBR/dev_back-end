#include <stdio.h>
/* Select Sort
 * Conhecido também como Selection Sort, é um algoritmo de ordenação básico,
 * onde sempre o menor valor será passado para o início do vetor (primeira posição),
 * e depois o segundo menor valor será passado para a segunda posição e assim sucessivamente,
 * ordenando desta forma os valores do vetor.
 * Tempo de execução razoável, com isso o torna bem útil.*/

void select_sort(int vetor[], int tam){
	int menor, troca;

	//Loop Externo: para repassar todo o vetor
	for(int i = 0; i < (tam - 1); i++){
		menor = i;
		//Loop Interno: para trabalhar com o próximo elemento
		for(int j = (i+1); j < tam; j++){ // esse FOR esta dentro do FOR (Loop Externo)
			if(vetor[j] < vetor[menor]){ // IF dentro de FOR (Loop Interno)
				menor = j; //menor recebe j
			}
		}
		//Ocorrendo a Troca
		if(i != menor){ //IF dentro de FOR (Loop Externo) //Se i sendo diferente de menor
			troca = vetor[i]; //troca receber vetor[i] (vetor na posição i)
			vetor[i] = vetor[menor]; //vetor[i] recebe vetor[menor]
			vetor[menor] = troca; // vetor[menor] recebe troca
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

	//Função de ordenação utilizando Select Sort
	select_sort(vetor, 6);

	printf("{");

	//Apresentar vetor ordenado
	for(int i = 0; i < 6; i++){
		printf("%d ", vetor[i]);
	}

	printf("}");
	printf(" - Vetor Ordenado.");

	return 0;
}
