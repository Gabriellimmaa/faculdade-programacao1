/******************************************************************************
Atividade 1 structs

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX 100
int media = 0;

struct bancoDados {
    char codigo[30];
    char nome[500];
    int idade;
    int sexo;
    float nota;
    char codigoDisciplina[25];
    char nomeDisciplina[100];
};

struct bancoDados2 {
    char codigo[25];
    char nome[100];
    int qtdMatriculas;
};

void inserirDados (struct bancoDados *matriculas, int qtd) {
    for (int i=0;i< qtd;i++) {
        fflush(stdin);
        printf("Aluno %d\n", i);
        printf("Codigo: ");
        gets(matriculas[i].codigo);
        printf("Nome: ");
        gets(matriculas[i].nome);
        printf("Idade: ");
        scanf("%d", &matriculas[i].idade);
        printf("Sexo: ");
        scanf("%d", &matriculas[i].sexo);
        printf("Nota: ");
        scanf("%f", &matriculas[i].nota);
        fflush(stdin);
        system("cls");
    }
}

void inserirDados2 (struct bancoDados2 *disciplinas, int qtd) {
    for (int i=0;i< qtd;i++) {
        fflush(stdin);
        printf("Disciplina %d\n", i);
        printf("Codigo Disciplina: ");
        gets(disciplinas[i].codigo);
        printf("Nome Disciplina: ");
        gets(disciplinas[i].nome);
        system("cls");
    }
}

void inserirDisciplinas (struct bancoDados *matriculas, int qtd) {
    for (int i=0;i< qtd;i++) {
        fflush(stdin);
        printf("Matricula | Disciplina\n");
        printf("%s ", matriculas[i].codigo);
        gets(matriculas[i].codigoDisciplina);
        system("cls");
    }
}

void exibirDados (struct bancoDados matriculas){
    printf("......... Abaixo da media .........\n");
    printf("Codigo.................%s\n", matriculas.codigo);
    printf("Nome.............%s\n", matriculas.nome);
    printf("Idade.............%d\n", matriculas.idade);
    printf("Sexo................%d\n", matriculas.sexo);
    printf("Nota................%.2f\n", matriculas.nota);
}

void exibirDdisciplinas (struct bancoDados2 disciplinas){
    printf("......... Abaixo da media .........\n");
    printf("Codigo.................%s", disciplinas.codigo);
    printf("Nome.............%s", disciplinas.nome);
}

int main()
{
    int masculino = 0, feminino = 0, idades = 0, idades_enem = 0;
    float media_idade, media_enem;
    struct bancoDados matriculas[MAX];
    struct bancoDados2 disciplinas[MAX];
    int qtdAlunos, qtdDisciplina;
    printf("Quantos alunos recebera?\n");
    scanf("%d", &qtdAlunos);
    system("cls");

    inserirDados(matriculas, qtdAlunos);

    printf("Quantas disciplinas seguirao?\n");
    scanf("%d", &qtdDisciplina);
    system("cls");

    inserirDados2(disciplinas, qtdDisciplina);
    inserirDisciplinas(matriculas, qtdAlunos);
    system("cls");

    for (int i=0;i < qtdAlunos;i++){
        if (matriculas[i].sexo == 1){
            masculino = masculino + 1;
        }
        if (matriculas[i].sexo == 0){
            feminino = feminino + 1;
        }

        if (matriculas[i].nota >= 7.5){
            idades_enem = idades_enem + matriculas[i].idade;
        }

        for (int j=0;j < qtdDisciplina;j++){
            if (matriculas[i].codigoDisciplina == disciplinas[j].codigo){
                disciplinas[j].qtdMatriculas = disciplinas[j].qtdMatriculas + 1;
            }
        }

        idades = idades + matriculas[i].idade;

    }

    media_idade = idades/qtdAlunos;
    media_enem = idades_enem/qtdAlunos;

    printf("Quantidade de alunos do sexo masculino: \n%d\n\n", masculino);
    printf("Quantidade de alunos do sexo feminino: \n%d\n\n", feminino);
    printf("Media das idades dos alunos: \n%.2f\n\n", media_idade);
    printf("Media das idades dos alunos que tiraram nota maior que 7.5 no enem: \n%.2f\n\n", media_enem);

    printf("Dados sobre as disciplinas:\n");
    for (int i=0;i < qtdDisciplina;i++){
        printf("Nome: %s\nMatriculados: %d", disciplinas[i].nome, disciplinas[i].qtdMatriculas);
        for (int j=0;j < qtdAlunos;j++){
            if (matriculas[j].codigoDisciplina == disciplinas[i].codigo){
                printf("%s", matriculas[j].nome);
            }
        }
    }

    return 0;
}

