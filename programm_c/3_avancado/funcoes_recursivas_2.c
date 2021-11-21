#include <stdio.h>

/* Recursividade - Parte 2
 * Então é importante que a função recursiva tenha uma condição de parada.
 * Sendo ela a função. de Fibonacci.
 *
 * Em linguagens funcionais, como Elixir por exemplo, é utilizado recursividade.
 * Pois não tem estrutura como o FOR nessa linguagem (Elixir).*/

int fib(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}

	return fib(n - 1) + fib(n - 2);
}

int main(){
	int qtd;

	printf("Informe o tamanho da sequência Fibonacci: ");
	fflush(stdout);
	scanf("%d", &qtd);

	for(int i = 0; i < qtd; i++){
		printf("%d ", fib(i + 1));
	}

	return 0;
}
