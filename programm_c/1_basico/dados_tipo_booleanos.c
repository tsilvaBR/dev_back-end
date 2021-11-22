#include <stdio.h>
/*Tipos de Dados # Booleanos ou seja Verdadeiro ou Falso (True or False)
  Na linguagem C, não existe um tipo de dado boolean!!!!
  Mas reconhece o valor 0 (zero) como Falso (False) e qualquer valor diferente
  de 0 (zero), seja positivo ou negativo, como Verdadeiro (True)*/

int main(){
	int booleano = 0;//altere o número para imprimir.

	if(booleano){
		printf("Verdadeiro...\n");
	}else{
		printf("Falso...\n");
	}

	return 0;
}
