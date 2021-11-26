#include <stdio.h>

int main(){
	FILE *arq;
	int num, resultado, soma = 0;

	arq = fopen("arquivo1.txt", "r");

	if(arq){
		while(!feof(arq)){
			resultado = fscanf(arq, "%d", &num);
			if(resultado == 1){
				soma = soma + num;
			}
		}
	}else{
		printf("Arquivo Não Encontrado!\n");
	}
	printf("A soma dos números encontrados é %d.\n", soma);
	fclose(arq);
	return 0;
}
