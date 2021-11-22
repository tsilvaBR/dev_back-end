#include <stdio.h>
#include <stdlib.h>
//Estrutura de decisao if, else, else if
int main(){
	//declaracao de variaveis
	int idade;

	//entrada
	printf("Qual é a sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);

	//processamento
	if(idade < 18){
		printf("Voce e menor de idade.\n");
	}else if(idade > 18 && idade <60){
		printf("Voce e adulto.\n");
	}else{
		printf("Voce e idoso.\n");
	}
	//saida
	printf("Sua idade e %d anos.\n", idade);
	system("pause");
	return 0;
}
