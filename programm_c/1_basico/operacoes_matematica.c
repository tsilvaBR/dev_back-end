#include <stdio.h>
/*Tipos de Dados # Operações Matemática
 * as básicas são:
  adição +
  subtração -
  multiplicação *
  divisão /
  potenciação **
  resto da divisão %

  Casting ou conversão quando uma variável do tipo inteiro (por exemplo)
  precisa ser convertida no meio do programa, exemplo:
  int num1, num2;
  divisão = (float)num1 / (float)num2;
  */

int main(){
	int num1, num2;
	float res = 0; //res de resultado.

	printf("Informe o num1:\n");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o num2:\n");
	fflush(stdout);
	scanf("%d", &num2);

	//adição (soma)
	res = num1 + num2;
	printf("A soma é %d.\n", (int)res);

	//subtração
	res = num1 - num2;
	printf("A subtração é %d.\n", (int)res);

	//multiplicação
	res = num1 * num2;
	printf("A multiplicação é %d.\n", (int)res);

	//divisão
	res =  (float)num1 / (float)num2;
	printf("A divisão é %f.\n", res);

	//potenciação
	res = num1 * num1;
	printf("A potência de %d é %d.\n", num1, (int)res);

	//resto da divisão ###OBS: nesse caso usamos o resto da divisão para saber se o número é par ou ímpar.
	//res = num1 % 2;
	//printf("O resto da divisão de %d é %d.\n", num1, res);
	if(num1 % 2 == 0){
		printf("%d é par.\n", num1);
	}else{
		printf("%d é ímpar.\n", num1);
	}

	return 0;
}
