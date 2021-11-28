#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Estruturas de Dados (ED) em C - Lista Encadeada
Conhecida como Lista Ligada (Linked List)

Lista encadeada possui além do seu valor, um ponteiro apontando para o próximo elemento.

-----      -----      -----
|1| |  ->  |4| |  ->  |7| |  ->  NULL  // cada elemento é chamado de NÓ {1, 4, 7}
-----      -----      -----

Podemos inserir elementos tanto no início quanto no fim {1, 4, 7} antes do 1 ou depois do 7...

lembrando ponteiro *p que também é declarado &p e ->p.
*/
struct st_no{ //no de NÓ
	int valor;
	struct st_no *prox; //ponteiro proximo NÓ
};

typedef struct st_no no;

int vazia(no *le){ //le de lista encadeada
	if(le->prox == NULL){ // verificação do proximo elemento estiver apontando para NULL - significa que esta vazia.
		return 1; // retornar 1
	}else{
		return 0; // caso contrário retornar 0
	} //seria o verdadeiro ou falso.
}
void inicia(no *le){
	le->prox = NULL; // inicializar apontando para o NULL (vazio).
}

void libera(no *le){ // liberar a lista encadeada
	if(!vazia(le)){
		no *proxNo, *atual;
		atual = le->prox;
		while(atual != NULL){
			proxNo = atual->prox;
			free(atual);
			atual = proxNo;
		}
	}
}

void exibe(no *le){ // exibir a lista encadeada.
	if(vazia(le)){
		printf("\nLista está vázia!\n\n");
		return;
	}
	no *tmp;
	tmp = le->prox;

	printf("\n");
	while(tmp != NULL){
		printf("%d ", tmp->valor);
		tmp = tmp->prox;
	}
	printf("\n\n");
}

void insereInicio(no *le){
	no *novo = (no*)malloc(sizeof(no)); // vamos alocar um espaço para o NÓ
	if(!novo){ //1º verificar se tem memória.
		printf("Sem memória disponível!\n");
		exit(1);
	} // caso não, segue o programa.
	printf("\nInforme o valor: ");
	fflush(stdout);
	scanf("%d", &novo->valor);

	no *oldHead = le->prox; //pegamos a 'cabeça anterior' e apontamos para o próximo.

	le->prox = novo; // apontando para o novo
	novo->prox = oldHead; // novo apontdando para oldHead
}

void insereFim(no *le){ // vamos alocar um espaço para o NÓ
	no *novo = (no*)malloc(sizeof(no)); //
	if(!novo){ //1º verificar se tem memória.
		printf("Sem memória disponível!\n");
		exit(1);
	} // caso seja possível então, seguimos com o programa.
	printf("\nInforme o valor: ");
	fflush(stdout);
	scanf("%d", &novo->valor);
	novo->prox = NULL;

	if(vazia(le)){
		le->prox = novo;
	}else{ // caso não
		no *tmp = le->prox;

		while(tmp->prox != NULL){
			tmp = tmp->prox;
		}
		tmp->prox = novo;
	}
}

void opcao(no *le, int op){
	switch(op){
	case 0:
		libera(le);
		break;
	case 1:
		exibe(le);
		break;
	case 2:
		insereInicio(le);
		break;
	case 3:
		insereFim(le);
		break;
	case 4:
		inicia(le);
		break;
	default:
		printf("Comando Inválido.\n\n");
	}
}

int menu(){
	int opt;

	printf("[0] - Sair.\n");
	printf("[1] - Exibir.\n");
	printf("[2] - Adicionar NÓ no Início.\n");
	printf("[3] - Adicionar NÓ no Fim.\n");
	printf("[4] - Zerar lista.\n");
	printf("Opção: ");
	fflush(stdout);
	scanf("%d", &opt);

	return opt;
}

int main(){
	no *le = (no*)malloc(sizeof(no));

	if(!le){
		printf("Sem memória disponível: ");
		exit(1);
	}
	inicia(le);
	int opt;

	do{
		opt = menu();
		opcao(le, opt);
	}while(opt);
	free(le);
	return 0;
}
