#include <stdio.h>
/*Funções - Escrevendo Funções

  #Estrutura das funções.#
  - tipo de retorno
  - nome
  - parâmetros de entrada (opcional)
  - implementação
  - retorno (opcional)
  */

void mensagem(){ //tipo de retorno VOID = vazio; nome da função MENSAGEM
	printf("Bem-vindo!"); //implementação
	//como o retorno é VOID não é necessário colocar RETURN.
}

int soma(int num1, int num2){ /* tipo de retorno INT; nome da função SOMA;
	                             parâmetros de entrada: int num1, int num2*/

	int res = num1 + num2; //implementação
	return res; //retorno
}

void proximo_char(char letra){ //VOID; proximo_char; char letra
	printf("%c", letra+1); //implementação
}

int main(){//tipo de retorno INT; nome da função: MAIN = principal
	printf("Olá..."); //implementação
	return 0; //retorno ### Nesse caso é obrigatório colocar o Retorno RETURN.
}
