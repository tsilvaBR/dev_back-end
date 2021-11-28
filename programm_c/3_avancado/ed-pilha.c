#include <stdio.h>
/* Estruturas de Dados (ED) em C - Pilha
 - Conhecida também por Stack
 - Os dados são inseridos sempre no topo, ou seja, sempre que um novo elemento é inserido
ele ocupa o topo da pilha.
 - Só temos acesso ao elemento que está no topo.
 - O processo de inserir um elemento é chamado de push.
 - O processo de remover um elemento é chamado de pop.
 FILO = First In / Last Out ou;
 LIFO = Last In / First Out;

 ---
 |8| -> Topo da Pilha - último elemento inserido, ao remover será o primeiro
 ---
 |7|
 ---
 |6|
 ---
 |5|
 ---
 |4|
 ---
 |3|
 ---
 |2|
 ---
 |1|
 ---

  - Aplicação da Pilha (onde usamos): CRTL + Z é um exemplo.

 */

#define TAMPILHA 10

//Pilha / Stack
int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos(){
	printf("\n==================== Pilha Atual ====================\n\n");
	for(int i = 0; i < TAMPILHA; i++){
		printf("-");
		printf("|%d|", pilha[i]);
		printf("-");
	}
	printf("\n\nTopo: %d", topo);
	printf("\n\n");
}

void push(){
	int val;
	printf("Informe o valor: ");
	fflush(stdout);
	scanf("%d", &val);
	if(topo < TAMPILHA){
		pilha[topo] = val;
		topo = topo + 1;
		lista_elementos();
	}else{
		printf("Pilha Cheia!!!\n");
	}
}

void pop(){
	if(topo >= 0){
		pilha[topo-1] = 0;
		topo = topo - 1;
		lista_elementos();
	}else{
		printf("Pilha Vazia!!!\n");
	}
}

void clear(){
	for(int i = 0; i < TAMPILHA; i++){
		pilha[i] = 0;
	}
	topo = 0;
}

int main(){
	int opcao = 0;

	do{
		printf("Selecione a opção desejada: \n\n");
		printf("[1] - Inserir (push).\n");
		printf("[2] - Remover (pop).\n");
		printf("[3] - Listar.\n");
		printf("[4] - Limpar a pilha (clear).\n");
		printf("[5] - Sair (exit).\n");
		printf("Opção: ");
		fflush(stdout);
		scanf("%d", &opcao);

		switch(opcao){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			lista_elementos();
			break;
		case 4:
			clear();
			break;
		case 5:
			break;
		default:
			printf("Opção Inválida!!\n");
		}
	}while(opcao != 5);
	return 0;
}
