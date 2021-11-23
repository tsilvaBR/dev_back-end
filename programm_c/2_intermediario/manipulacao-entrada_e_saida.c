#include <stdio.h>
// FILE == arquivo

int main(){
	FILE *arq;

	// fopen (nome-do-arquivo, forma-de-abertura-do-arquivo
	// w - abrir o arquivo para escrita (se o arquivo já existir, será sobrescrito com um novo zerado)
	// r - abrir o arquivo para leitura (não podemos escrever no arquivo)
	// wa - abrir o arquivo para adição de conteúdo (se o arquivo já existir, o conteúdo sera adicionando nas últimas linhas)
	arq = fopen("arquivo.txt", "w");

	//após finalizar a maninpulação de um arquivo, devemos fecha-lo
	fclose(arq);

	return 0;
}
