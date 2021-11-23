#include <stdio.h>
#include <string.h>
// Struct == Estrutura
// Além dos arrays (uni e multidimensionais) o Struct também faz parte da ED (Estrutura de Dados).

struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
};

int main(){
	struct st_aluno aluno1;

	printf("Informe a matrícula do aluno; ");
	fflush(stdout);
	fgets(aluno1.matricula, 10, stdin);

	printf("Informe o nome do aluno; ");
	fflush(stdout);
	fgets(aluno1.nome, 100, stdin);

	printf("Informe o curso do aluno; ");
	fflush(stdout);
	fgets(aluno1.curso, 50, stdin);

	printf("Informe o ano de nascimento do aluno; ");
	fflush(stdout);
	scanf("%d", &aluno1.ano_nascimento);

	printf("\n=============== Dados do Aluno ===============\n");
	printf("Matrícula: %s\n", aluno1.matricula);
	printf("Nome: %s\n", aluno1.nome);
	printf("Curso: %s\n", aluno1.curso);
	printf("Ano de Nascimento: %d\n", aluno1.ano_nascimento);

	return 0;
}
