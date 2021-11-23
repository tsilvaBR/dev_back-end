#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	char fruta[10]; //array (vetor) do 0 até 9

	arq = fopen("frutas.txt", "w"); // "w" de write abre e apaga o texto caso o arquivo já existá, e escreve o arquivo.

	if(arq){
		printf("Informe uma fruta, ou digite 0 (zero) para Sair.\n");
		fflush(stdout);
		fgets(fruta, 10, stdin); //stdin = standard input, ou seja, entrada padrão.
		while(fruta[0] != '0'){ //enquanto fruta na posição 0, seja, diferente de 0, que é o ponto de parada.
			fputs(fruta, arq);//colocar a fruta no arquivo
			printf("Informe uma fruta, ou digite 0 (zero) para Sair.\n");
			fflush(stdout);
			fgets(fruta, 10, stdin);
		}
	}else{
		printf("Não foi possível criar o arquivo.\n");
	}
	fclose(arq); //sempre fechar o arquivo!!
	return 0;
}
