#include <stdio.h> //biblioteca da Linguagem C
/* Arquivos de Cabeçalhos - Bibliotecas
 * Podemos criar a nossa biblioteca
 * */
#include "ajuda.h" //biblioteca criada pelo programador "aspas duplas"

int main(){
	int n1, n2, ret_s, ret_m;

	mensagem();

	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret_s = soma(n1, n2);
	printf("A soma de %d com %d é %d.\n", n1, n2, ret_s);

	ret_m = multiplicacao(n1, n2);
	printf("A multiplicação de %d com %d é %d.\n", n1, n2, ret_m);

	return 0;
}
