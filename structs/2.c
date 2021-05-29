/******************************************************************************
Atividade 2 structs

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX 100
int media = 0;

struct bancoDados {
    char nome[100];
    char endereco[200];
    int telefone;
    int preco;
};

void inserirDados (struct bancoDados *lojas, int qtd) {
    for (int i=0;i< qtd;i++) {
        fflush(stdin);
        printf("Loja %d\n", i);
        printf("Nome: ");
        fgets(lojas[i].nome, 100, stdin);
        printf("Endereco: ");
        fgets(lojas[i].endereco, 200, stdin);
        printf("Telefone: ");
        scanf("%d", &lojas[i].telefone);
        printf("Preco: ");
        scanf("%d", &lojas[i].preco);
        printf("\n");
        media = media + lojas[i].preco;
    }
}

void exibirDados (struct bancoDados lojas){
    printf("......... Abaixo da media .........\n");
    printf("Nome.................%s", lojas.nome);
    printf("Endereco.............%s", lojas.endereco);
    printf("Telefone.............%d\n", lojas.telefone);
    printf("Preco................%d\n\n", lojas.preco);
}

int main()
{
    struct bancoDados lojas[MAX];
    int qtdLojas;
    printf("Quer registrar quantas lojas?\n");
    scanf("%d", &qtdLojas);
    system("cls");
    inserirDados(lojas, qtdLojas);
    media = media/qtdLojas;
    for (int i=0;i < qtdLojas;i++){
        if (lojas[i].preco < media){
            system("cls");
            exibirDados(lojas[i]);
        }
    }
    return 0;
}

