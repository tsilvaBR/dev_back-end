#include <stdio.h>
// TypeDef = Redefinir Tipos

int main(){
	typedef float nota;

	//declarando variáveis
	nota prova1 = 7.0;
	nota prova2 = 6.0;

	nota soma = prova1 + prova2;

	printf("A soma das notas: %.2f\n", soma);

	nota media = soma / 2;

	printf("A média do aluno: %.2f\n", media);

	return 0;
}
