#include <stdio.h>

int main(){

    int idade; //declarando variável do tipo inteiro 
    //ao declarar a variável podemos também inicializar exemplo int idade = 0
    
    //funcao printf para escrever algo na saida padrão (console)
    printf("Qual e a sua idade? ");

    //funcao scanf é para receber dados do teclado
    scanf("%d", &idade);

    //saída
    printf("A sua idade e %d", idade);

    return 0;
}