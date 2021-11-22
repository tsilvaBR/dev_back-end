#include <stdio.h>
/* Matrizes - Parte 2
 * Conhecidas como array multidimensionais. exemplo: char nome [3][50];
 * ##Interpretação: podendo colocar 3 nomes com até 50 caracteres##.
 *
 * ###Comparação de Vetores com Matrizes###
 * 1) vetor é array unidimensional, exemplo: int numeros[5]; que é [0][1][2][3][4]
 *    Já Matriz é array multidimensional, exemplo in numeros[5][5]; que é: [linhas][colunas]
 *    [00][01][02][03][04]
 *    [10][11][12][13][14]
 *    [20][21][22][23][24]
 *    [30][31][32][33][34]
 *    [40][41][42][43][44]
 *    ####OBS.: Uma imagem (PNG por exemplo) é a melhor colocação para descrever o que é uma Matriz
 *    512 pixels X 512 pixels (largura X altura) significa 512 linhas X 512 colunas####*/

int main(){
	//matrizes e inteiros
	int numeros[2][2];
	numeros[0][0]=1;
	numeros[0][1]=2;
	numeros[1][0]=3;
	numeros[1][1]=4;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("números[%d][%d] vale %d.\n", i, j, numeros[i][j]);
		}
	}

	//matrizes e reais
	//float valores[3][3];
	return 0;
}
