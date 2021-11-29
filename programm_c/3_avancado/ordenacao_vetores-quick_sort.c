#include <stdio.h>

/* Assim como o Shell Sort, o Quick Sort ordena vetores separando o mesmo em grupos
 * e ordenando estes grupos conforme vai varrendo o vetor*/

void quick_sort(int vetor[], int tam){
	int i, j, grupo, troca;

	//critério de para da recursividade
	if(tam < 2){
		return; //sai da função
	}else{
		grupo = vetor[tam / 2];
	}
	//fazendo um loop único se comportar como dois loop
	for(i = 0, j = tam - 1;; i++, j--){

		//fazendo a movimentação dos elementos no vetor
		while(vetor[i] < grupo){
			i++;
		}
		//fazendo a movimentação dos elementos no vetor
		while(grupo < vetor[j]){
			j--;
		}
		//critério de para do loop
		if(i >= j){
			break;
		}else{
			//onde ocorrem as trocas
			troca = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = troca;
		}
	}
	//usar a recursividade para ordenar os grupos
	quick_sort(vetor, i);
	quick_sort(vetor + i, tam - i);
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

	//Função de ordenação utilizando Quick Sort
	quick_sort(vetor, 6);

	printf("{");

	//Apresentar vetor ordenado
	for(int i = 0; i < 6; i++){
		printf("%d ", vetor[i]);
	}

	printf("}");
	printf(" - Vetor Ordenado, com Quick Sort.");

	return 0;
}
