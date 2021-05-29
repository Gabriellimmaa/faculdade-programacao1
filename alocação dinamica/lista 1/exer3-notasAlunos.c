#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
	int matricula;
	char nome[50];
	float nota;
};
void* alocaVetor(int tam) {
	struct aluno *alunos;
	//aloca vetor de struct alunos
	alunos = (struct aluno *) malloc (tam * sizeof(struct aluno));
	if (alunos == NULL) { //verifica se houve erro
		exit(1);
	}
}
void* desalocaVetor(struct aluno *alunos) {
	if (alunos != NULL)//se n tiver vazio
		free(alunos); 
	alunos = NULL; 
}
void insereAluno(struct aluno *alunos, int n) {
	for (int i=0; i<n; i++) {
		getchar(); //descarta o \n do scanf
		alunos[i].matricula = i+1;
		fgets(alunos[i].nome, 50, stdin);
		scanf("%f", &alunos[i].nota);
	}
}
void mostraAluno(struct aluno alunos) {
	printf("Matricula.......: %d\n", alunos.matricula);
	printf("Nome............: %s", alunos.nome);
	printf("Situação........: ");
	//verifica situacao do aluno
	if (alunos.nota >= 7) 
		printf("Aprovado");
	else if (alunos.nota >=4 && alunos.nota < 7) 
		printf("Exame");
	else
		printf("Reprovado");
	printf("\n");
}
int main() {
	struct aluno *alunos;
	int n;
	//le qtde de alunos
	scanf("%d", &n);
	//chama funcao de alocar
	alunos = alocaVetor(n);
	//chama funcao de inserir aluno
	insereAluno(alunos, n);
	//percorre mostra alunos
	for (int i=0; i<n; i++) 
		mostraAluno(alunos[i]);
	//desaloca vetor
	desalocaVetor(alunos);
	return 0;
}