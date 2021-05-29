#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

struct aluno { 
	char nome[50]; 
	char sobrenome[50];
	float nota; 
}; 
//funcao que verifica aluno com a maior nota
void alunoMaiorNota (struct aluno *vetAlunos, int tam) { 
	int i, posicao; 
	float maior=0; 
	for (i=0; i<tam; i++) { 
		if (vetAlunos[i].nota > maior){ 
			maior = vetAlunos[i].nota; 
			posicao = i; 
		} 
	} 
	printf("%s %s obteve a maior nota da turma ", vetAlunos[posicao].nome, vetAlunos[posicao].sobrenome); 
} 

int main() { 
	struct aluno *al;
	int i, n;
	//le numero de alunos
	scanf("%d", &n);
	//aloca de acordo com n
	al = (struct aluno *) malloc (n * sizeof(struct aluno));
	if (al == NULL) //se erro
		exit(1);
	for (i=0; i < n; i++) { 
		getchar(); 
		gets(al[i].nome);
		gets(al[i].sobrenome);
		scanf("%f", &al[i].nota); 
	} //chama funcao para verificar maior nota
	alunoMaiorNota(al, n);
	//liberando memoria alocada 
	free(al);
	return 0; 
}