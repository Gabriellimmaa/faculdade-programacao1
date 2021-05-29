#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

struct aluno {
    int matricula;
    char nome[255];
    int opcao;
    int publica;
    float valor;
};

void insereAluno(struct aluno *alunos, int n) {
    getchar();
    for (int i=0; i<n; i++) {
        alunos[i].matricula = i + 1;
        printf("Numero da matricula: %d\n", alunos[i].matricula);
        printf("Insira o nome do aluno: ");
        fgets(alunos[i].nome, 255, stdin);
        printf("Insira a opcao de inscricao: ");
        scanf("%d", &alunos[i].opcao);
        printf("O aluno estudou em escola publica? (1-sim | 2-nao): ");
        scanf("%d", &alunos[i].publica);
        if (alunos[i].opcao == 1){
            if (alunos[i].publica == 1){
                alunos[i].valor = (50-((30 * 50) / 100));
            }else{
                alunos[i].valor = 50;
            }
        }
        if (alunos[i].opcao == 2){
            if (alunos[i].publica == 1){
                alunos[i].valor = (65-((30 * 65) / 100));
            }else{
                alunos[i].valor = 65;
            }
        }
        if (alunos[i].opcao == 3){
            if (alunos[i].publica == 1){
                alunos[i].valor = (80-((30 * 80) / 100));
            }else{
                alunos[i].valor = 80;
            }
        }
        if (alunos[i].opcao == 4){
            if (alunos[i].publica == 1){
                alunos[i].valor = (100-((30 * 100) / 100));
            }else{
                alunos[i].valor = 100;
            }
        }
        printf("\n");
        setbuf(stdin, 0);
    }
}

void mostraAluno(struct aluno alunos[], int tam) {
    float arrecadado = 0;
    int op1 = 0, op2 = 0, op3 = 0, op4 = 0;
    for(int i=0;i<tam;i++)
    {
        if (alunos[i].opcao == 1){
            arrecadado = arrecadado + alunos[i].valor;
            op1 = op1 + 1;
        }
        if (alunos[i].opcao == 2){
            arrecadado = arrecadado + alunos[i].valor;
            op2 = op2 + 1;
        }
        if (alunos[i].opcao == 3){
            arrecadado = arrecadado + alunos[i].valor;
            op3 = op3 + 1;
        }
        if (alunos[i].opcao == 4){
            arrecadado = arrecadado + alunos[i].valor;
            op4 = op4 + 1;
        }
    }
    printf("------------------------------------------\n");
    printf("Total arrecadado: %.2f\n", arrecadado);
    printf("------------------------------------------\n");
    printf("Total de aluno cadastrado em cada opcao\n\n");
    printf("opcao 1: %d\n", op1);
    printf("opcao 2: %d\n", op2);
    printf("opcao 3: %d\n", op3);
    printf("opcao 4: %d\n", op4);
    printf("------------------------------------------\n");
}

void* alocaVetor(int tam) {
    struct aluno *alunos;

    alunos = (struct aluno *) malloc (tam * sizeof(struct aluno));

    if (alunos == NULL) {
        exit(1);
    }
}

void desalocaVetor(struct aluno *aluno) {
    if (aluno != NULL)
        free(aluno);
    aluno = NULL;
}


int main() {
    int n, op;
    struct aluno *alunos;

    printf("Insira um numero de inscricoes a cadastrar: ");
    scanf("%d", &n);

    // alocando vetor na memoria
	alunos = alocaVetor(n);

	// exibindo tabela de opcoes
	system("cls");
    printf("--------------------- Opcoes para inscricao ---------------------\n");
    printf("1- Inscricao + 1 minicurso.............................R$50,00\n");
    printf("2- Inscricao + 2 minicurso.............................R$65,00\n");
    printf("3- Inscricao + 3 minicurso.............................R$80,00\n");
    printf("4- Inscricao + participacao em todos os minicursos.....R$100,00\n");
    printf("-----------------------------------------------------------------\n");

    // inserindo alunos
	insereAluno(alunos, n);

	// mostrando os alunos
	system("cls");
    mostraAluno(alunos, n);

    getchar();
    return 0;
}
