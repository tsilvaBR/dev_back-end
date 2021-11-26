#include <stdio.h>

int main(){
	FILE *arq;
	char nome[30], *resultado;

	arq = fopen("arquivo.txt", "r");

	if(arq){
		printf("Achei o arquivo! Segue abaixo.\n\n");
		while(!feof(arq)){ //File End Of File
			resultado = fgets(nome, 30, arq);
			printf("Resultado: %d\n", resultado);
			if(resultado){
				printf("%s\n", nome);
			}
		}
	}else{
		printf("Não Achei o Arquivo Solicitado!\n");
	}
	fclose(arq);
	return 0;
}
