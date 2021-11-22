#include<stdio.h>
#include<stdlib.h>

/* Tipos de Dados #Numéricos: Inteiros e Reais.
   Inteiro int (%d) ou int long 1, 2, 3
   Reais float (%f) ou double (%lf) 2.54, 3.14 (na linguagem de programação C não usamos
   vírgula para separar as casas decimais) usamos ponto */

int main(){
	float nota1, nota2, media;

	printf("Qual é a primeira nota?\n ");
	fflush(stdout);
	scanf("%f", &nota1);

	printf("Qual é a segunda nota?\n ");
	fflush(stdout);
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	printf("Sua média é %.2f.\n", media);

	return 0;
}
