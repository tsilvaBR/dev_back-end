#include <stdio.h>
#include <stdlib.h>
/* Aloação Dinâmica - Matrizes - Parte 2
 * [00][01][02]
 * [10][11][12]
 * [20][21][22]
 * 3 linhas e 3 colunas ### Vamos refrescar!! ###
 * int = 4 bytes então -> 1 * 1 * 4 = 4 bytes 1 int
 *                        1 * 2 * 4 = 8 bytes 1 int de linha e 2 int de coluna
 *                        2 * 2 * 4 = 16 bytes 2 int de linha e 2 int de coluna
 *                        3 * 3 * 4 = 36 bytes 3 int de linha e 3 int de coluna
 *                        #### OBS.: o 4 é o sizeof(int) ####
 * */

int main(){

	int *p, linhas = 3, colunas = 3;

	p = (int*)malloc(linhas * colunas * sizeof(int));//tira o qtd e entra linhas*colunas*sizeof(int)

	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			p[i * colunas + j] = 3 * i + j;
		}
	}
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			printf("%d\n", p[i * colunas + j]);
		}
	}

	free(p);
	p = NULL;
	return 0;

}
