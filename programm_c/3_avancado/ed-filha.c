#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Estruturas de Dados (ED) em C - Fila
Fila conhecida Queue
Sabemos que vetores, matrizes, structs, union, enum e etc., são ED.
fila de banco;
O elemento que entra primeiro, sai primeiro.
Sempre que um elemento é adicionado na fila, ele vai para o final dela.
Sempre que removemos um elemento, o primeiro é removido (por ordem de chegada, primeiro que chega, primeiro que é removido).

FIFO - First In / First Out ou seja primeiro que chega, primeiro que sai.

enqueue() - que adiciona elemento na fila.

dequeue() - que remove o elemento na fila.

clear() - que limpa a fila toda.

Estrutura da fila
fila[10] - [0][1][2][3][4][5][6][7][8][9]

head - cabeça da fila, indica quem é o primeiro da fila.

tail - cauda, indica quantos elementos tem na fila.

Aplicação de Fila: Em qualquer situação onde temos que organizar o atendimento de elementos.
*/

#define TAMFILA 10

//FILa / QUEUE
int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0; // próximo a ser atendido/removido
int tail = 0; // o último da fila

void lista_elementos(){
	printf("\n=============== FILA ATUAL ===============\n");
	for(int i = 0; i < TAMFILA; i++){
		printf("-");
		printf("|%d|", fila[i]);
		printf("-");
	}
	printf("\n");
	printf("\nHead: %d\t\t", head);
	printf("Tail: %d\n", tail);
	printf("\n\n");
}

void enqueue(){
	int val;
	if(tail < TAMFILA){
		printf("Informe o elemento para adicionar na fila: ");
		fflush(stdout);
		scanf("%d", &val);
		fila[tail] = val;
		tail = tail + 1;
		lista_elementos();
	}else{
		printf("A FILA está cheia!!!\n");
	}
}

void dequeue(){
	if(head < tail){
		fila[head] = 0;
		head = head + 1;
		lista_elementos();
	}else{
		printf("A FILA está vazia!!!\n");
	}
}

void clear(){
	for(int i = 0; i < TAMFILA; i++){
		fila[i] = 0;
	}
	head = 0;
	tail = 0;
}

int main(){

	int opcao = 0;

	do{
		printf("Selecione a opção: \n\n");
		printf(" [1] - Inserir (enqueue). \n");
		printf(" [2] - Remover (dequeue). \n");
		printf(" [3] - Listar os Elementos. \n");
		printf(" [4] - Limpar a FILA (clear). \n");
		printf("[-1] - Sair. \n");
		printf("Opção: ");
		fflush(stdout);
		scanf("%d", &opcao);

		switch(opcao){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			lista_elementos();
			break;
		case 4:
			clear();
			break;
		case -1:
			break;
		default:
			printf("Opção inválida!!");
		}

	}while(opcao != -1);

	return 0;
}
