#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct st_arvore{
	int valor;
	struct st_arvore *sad; //strcut arvore que aponta para direita
	struct st_arvore *sae; //struct arvore que aponta para esquerda
};

typedef struct st_arvore arvore; //struct arvore é arvore

arvore* criaArvore(){
	return NULL; //
}

int arvoreEstaVazia(arvore* t){
	return t == NULL;
}

void mostraArvore(arvore* t){
	printf("<");
	if(!arvoreEstaVazia(t)){
		printf("%d", t->valor);
		mostraArvore(t->sae);
		mostraArvore(t->sad);
	}
	printf(">");
}

void insereDadoArvore(arvore** t, int num){ //ponteiro apontando para um ponteiro
	if(*t == NULL){
		*t = (arvore*)malloc(sizeof(arvore));
		(*t)->sae = NULL;
		(*t)->sad = NULL;
		(*t)->valor = num;
	}else{
		if(num < (*t)->valor){
			insereDadoArvore(&(*t)->sae, num);
		}
		if(num > (*t)->valor){
			insereDadoArvore(&(*t)->sad, num);
		}
	}
}

int estaNaArvore(arvore* t, int num){
	if(arvoreEstaVazia(t)){
		return 0;
	}

	return t->valor==num || estaNaArvore(t->sae, num) || estaNaArvore(t->sad, num);
}

int main(){

	arvore* t = criaArvore();

	insereDadoArvore(&t, 12);
	insereDadoArvore(&t, 6);
	insereDadoArvore(&t, 18);
	insereDadoArvore(&t, 11);
	insereDadoArvore(&t, 3);
	insereDadoArvore(&t, 5);

	mostraArvore(t);

	if(arvoreEstaVazia(t)){
		printf("\n\nÁrvore Vazia!!\n");
	}else{
		printf("\n\nÁrvore NÃO Vazia!!\n");
	}

	if(estaNaArvore(t, 15)){
		printf("\nO elemento 15 pertence a Árvore!\n");
	}else{
		printf("\nO elemento 15 NÃO pertence a Árvore!\n");
	}

	if(estaNaArvore(t, 3)){
		printf("\nO elemento 3 pertence a Árvore!\n");
	}else{
		printf("\nO elemento 3 NÃO pertence a Árvore!\n");
	}

	free(t);

	return 0;
}
