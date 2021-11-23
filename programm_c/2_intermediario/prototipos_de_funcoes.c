#include <stdio.h>
/* Protótipos de Funções - Conhecido também como: Assinatura das Funções
   É a declaração das funções ou assinaturas; que serão executadas depois da Função MAIN.

   Uma assinatura é composto por:
   - tipo de retorno
   - nome
   - parâmetros de entrada
   */
int soma(int num1, int num2); //isso é um protótipo da função.

void mensagem();

int main(){
	int n1, n2, ret;

	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret = soma(n1, n2);

	printf("A soma de %d com %d é %d.\n", n1, n2, ret);

	mensagem();

	return 0;
}

int soma(int num1, int num2){ //colocar a função (secundária) depois da funçao MAIN() roda normalmente.
	                         // e parte do programa terá uma notificação de ERRO ou RESTRIÇÃO.
	return num1 + num2;
}

void mensagem(){
	printf("Fim do Programa...");
}
