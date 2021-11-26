#include <stdio.h>

int main(){
	FILE *arq;
	char c;

	arq = fopen("arquivo.txt", "r"); //leitura

	//primeiro é preciso verificar se o arquivo existe
	if(arq){
		printf("Achei o arquivo! Segue abaixo.\n\n"); //o nome do arquivo tem que ser igual respeitando letras Maiúsculas/Minúsculas e etc.
		while((c = getc(arq)) != EOF){ // EOF = End Of File #fim do arquivo# na última linha tem EOF 'invisível'.
			printf("%c", c);
		}
	}else{
		printf("Não achei o arquivo!\n");
	}
	fclose(arq);
	return 0;
}
