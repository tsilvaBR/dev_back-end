#include <stdio.h>

int main(){
	/*   0   1   2   3   4
	 * ---------------------
	 * |   |   |   |   |   |
	 * ---------------------
	 */
	int valores[5];

	for(int i = 0; i < 5; i++){
		printf("Informe o %d/5 valor: ", (i+1));
		fflush(stdout);
		scanf("%d", &valores[i]);
	}
	printf("Os valores informados foram: \n");
	for(int i = 0; i < 5; i++){
		printf("%d - seu endereço de memória é: %p.\n", valores[i], &valores[i]);
	}

	return 0;
}
