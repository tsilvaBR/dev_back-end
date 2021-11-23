#include <stdio.h>
#include <string.h>
// Struct == Estrutura
// ## Parte 3 ##
// E quando é necessário cadastrar mais de um aluno. Utilizamos array na variável aluno[i].

struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
}aluno[5];

int main(){
	//struct st_aluno aluno[5]; // Esse opção também serve para declarar variável.

	for(int i = 0; i < 5; i++){

		printf("Informe a matrícula do aluno; ");
		fflush(stdout);
		fgets(aluno[i].matricula, 10, stdin);

		printf("Informe o nome do aluno; ");
		fflush(stdout);
		fgets(aluno[i].nome, 100, stdin);

		printf("Informe o curso do aluno; ");
		fflush(stdout);
		fgets(aluno[i].curso, 50, stdin);

		printf("Informe o ano de nascimento do aluno; ");
		fflush(stdout);
		scanf("%d", &aluno[i].ano_nascimento); // quando temos um SCANF com FGETS temos que
		                                       // acrescentar o "getchar();" conforme abaixo.
		getchar();
	}
	for(int i = 0; i < 5; i++){

		printf("\n=============== Dados do Aluno %d ===============\n", (i+1));
		printf("\nMatrícula: %s\n", aluno[i].matricula);
		printf("Nome: %s\n", aluno[i].nome);
		printf("Curso: %s\n", aluno[i].curso);
		printf("Ano de Nascimento: %d\n", aluno[i].ano_nascimento);
	}

	return 0;
}
