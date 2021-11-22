#include <stdio.h>
#include <stdlib.h>
/*Tipo de Dados #Alfanuméricos Parte 1
  Caracteres; quando utilizamos aspas simples 'a' char %c
  Strings; ##OBS: Na linguagem C, não existe o tipo de dado String ## Uma String é o conjunto de caracteres!*/

int main(){
	char opcao;
	printf("Informe uma opção: \n");
	printf("a - Saldo da Conta. \n");
	printf("b - Extrato da Conta. \n");
	printf("c - Limite para Saque. \n");
	fflush(stdout);
	scanf("%c", &opcao);

	if(opcao == 'a'){
		printf("Seu Saldo é de ...\n");
	}else if(opcao == 'b'){
		printf("Extrato dos Últimos lancamentos ...");
	}else if(opcao == 'c'){
		printf("Seu Limite do Cheque Especial é ...");
	}else{
		printf("Opção inválida, Volte ao Menu Anterior.");
	}

	return 0;
}
