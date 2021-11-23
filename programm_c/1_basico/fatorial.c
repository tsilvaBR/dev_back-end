#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){ //funcao criada pelo programador
	int i, f = 1;
	for (i = 1; i <= n; i++) //caso que em que nao utilizamos ;
		f = f * i;
	return f;

}
int main(){ //aqui temos estrutura de decisao
	int x, y;
	printf("Digite um valor inteiro: ");
	fflush(stdout);
	scanf("%d", &x);
	if (x > 0){
		printf("X eh positivo.\n");
		y = fatorial(x);
		printf("Fatorial de X eh %d.\n", y);
	}else{
		if (x < 0)
			printf("X eh negativo.\n");
		else
			printf("X eh Zero.\n");
	}
	printf("Fim do programa!\n");
	system("pause");
	return 0;

}
