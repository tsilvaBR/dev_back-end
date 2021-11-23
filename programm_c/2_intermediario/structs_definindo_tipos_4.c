#include <stdio.h>
#include <string.h>
// Struct == Estrutura
// ## Parte 4 ##
// Struct com Struct. Ter mais de um Struct

struct st_contato{
	char nome[50];
	int	ano_nascimento;
	char telefone[15];
	char email[60];
};

struct st_agenda{
	struct st_contato contatos[100];
}agenda;

int main(){

	for(int i = 0; i < 3; i++){
		printf("Informe o Nome: ");
		fflush(stdout);
		fgets(agenda.contatos[i].nome, 50, stdin);

		printf("Informe o Ano de Nascimento: ");
		fflush(stdout);
		scanf("%d", &agenda.contatos[i].ano_nascimento);
		getchar();

		printf("Informe o Número de Telefone ");
		fflush(stdout);
		fgets(agenda.contatos[i].telefone, 15, stdin);

		printf("Informe o Endereço de E-mail: ");
		fflush(stdout);
		fgets(agenda.contatos[i].email, 60, stdin);
	}
	printf("\n############### Agenda de Contato ###############\n");
	for(int i = 0; i < 3; i++){
		printf("\n=============== Contato %d ===============\n", (i+1));
		printf("\nNome: %s\n", strtok(agenda.contatos[i].nome, "\n")); // strtok("\n") serve para não pular muitas linhas.
		printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
		printf("E-mail: %s\n", strtok(agenda.contatos[i].email, "\n"));
		printf("Ano de Nascimento: %d\n", agenda.contatos[i].ano_nascimento); //como é int não usamos strtok!!
	}
	return 0;
}
