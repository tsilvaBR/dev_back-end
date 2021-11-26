#include <stdio.h>
#include <string.h>

union numeros{
	int num1, num2, num3, num4, num5; // sabendo que um int vale 4 bytes -> 4 * 5 = 20 bytes
}n;

int main(){
	int soma = 0; // mas ainda com a soma de bytes por variáveis. 4 + 20 = 24 bytes

	n.num1 = 1;
	soma = soma + n.num1;
	printf("O valor de 'num1' é %d.\n", n.num1);

	n.num2 = 3;
	soma = soma + n.num2;
	printf("O valor de 'num2' é %d.\n", n.num2);

	n.num3 = 5;
	soma = soma + n.num3;
	printf("O valor de 'num3' é %d.\n", n.num3);

	n.num4 = 7;
	soma = soma + n.num4;
	printf("O valor de 'num4' é %d.\n", n.num4);

	n.num5 = 9;
	soma = soma + n.num5;
	printf("O valor de 'num5' é %d.\n", n.num5);

	printf("Soma dos números: %d.\n", soma);

	// abaixo estamos imprimindo os bytes para concluir que com union é utilizado
	// apenas a memória maior que foi declarado na variável no programa executado.

	printf("O 'n' está ocupando %ld bytes na memória.\n", sizeof(n)); // total de memória 4 bytes

	printf("A 'soma' está ocupando %ld bytes na memória.\n", sizeof(soma));// total de memória 4bytes

	printf("O 'n' e a 'soma' estam ocupando %ld bytes na memória.\n", sizeof(n) + sizeof(soma));
	//senão fosse pelo UNION poderia dar 20 bytes, que numa máquina/pc/dispositivo pode fazer uma grande diferença.

	return 0;
}
