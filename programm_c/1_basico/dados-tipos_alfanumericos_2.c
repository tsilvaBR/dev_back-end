#include <stdio.h>
#include <stdlib.h>
/*Tipo de Dados #Alfanuméricos Parte 2
  Caracteres; quando utilizamos aspas simples 'a' char %c
  Strings; ##OBS: Na linguagem C, não existe o tipo de dado String ## Uma String é o conjunto de caracteres!*/

int main(){
	//Segunda Parte sobre Dados Alfanuméricos - Trabalhando com alfabeto usanda a Tabela ASCII
	printf("Dec\t|Char\n");
	printf("--------|-----\n");
	for(int i = 97; i <= 122; i++){
		printf("%d\t| %c\n", i, i);
	}
	return 0;
}
