#include <stdio.h>
#include <string.h>
#define MAX 500

struct jogos
{
    char nome[30];
    char genero[30];
    char modoJogo[20];
    char plataforma[30];
    int ranking;
};

void cadastrarJogos(int tam)
{
    struct jogos j;
    FILE *arq;
    if((arq = fopen("exer1.rec", "wb")) == NULL)
    {
        exit(1);
    }

    for (int i=0; i<tam; i++)
    {
        fgets(j.nome, 30, stdin);
        fgets(j.genero, 30, stdin);
        fgets(j.modoJogo, 20, stdin);
        fgets(j.plataforma, 30, stdin);
        scanf("%d", &j.ranking);
        setbuf(stdin, 0); // limpar buffer do teclado
        fwrite(&j, sizeof(j), 1, arq);
    }
    fclose(arq);
}

void exibirGenero(int tam)
{
    struct jogos j;
    FILE *arq;
    if((arq = fopen("exer1.rec", "rb")) == NULL)
    {
        exit(1);
    }

    int i ;
    char escolha[30];
    printf("Escolha o genero : ");
    setbuf(stdin, 0);
    fgets(escolha, 30, stdin);
    while(fread(&j, sizeof(j), 1, arq) == 1)
    {
        {
            if(strcmp(escolha, j.genero) == 0)
            {
                printf("Nome ...........: %s", j.nome);
                printf("Genero .........: %s", j.genero);
                printf("Modo de Jogo ...: %s", j.modoJogo);
                printf("Plataforma .....: %s", j.plataforma);
                printf("Ranking ........: %d\n", j.ranking);
                printf("\n");
            }
        }
    }
}

void exibirRanking(int tam)
{
    struct jogos j;
    FILE *arq;
    if((arq = fopen("exer1.rec", "rb")) == NULL)
    {
        exit(1);
    }
    int i, escolha;
    printf("Escolha o ranking entre 1 e 5: ");
    scanf("%d", &escolha);
    while(fread(&j, sizeof(j), 1, arq) == 1)
    {
        if(j.ranking == escolha)
        {
            printf("Nome ...........: %s", j.nome);
            printf("Genero .........: %s", j.genero);
            printf("Modo de Jogo ...: %s", j.modoJogo);
            printf("Plataforma .....: %s", j.plataforma);
            printf("Ranking ........: %d\n", j.ranking);
            printf("\n") ;
        }
    }
}

void exibirFavorito(int tam)
{
    struct jogos j;
    FILE *arq;
    if((arq = fopen("exer1.rec", "rb")) == NULL)
    {
        exit(1);
    }
    int i;
    char escolha[30];
    printf(" Escolha o nome do jogo : ");
    setbuf(stdin, 0);
    fgets(escolha, 30, stdin);
    while(fread(&j, sizeof(j), 1, arq) == 1)
    {
        if (j.ranking == 5)
        {
            if (strcmp(escolha, j.nome) == 0)
                printf("Eh um dos favoritos !!!\ n");
            else
                printf("Nao eh um dos favoritos !!!\ n");
        }
    }
}

int main ()
{
    int i, op, jogos =0;
    struct jogos j;
    do
    {
        printf("Escolha uma opcao :\n");
        printf("(1) Cadastrar Jogos \n");
        printf("(2) Exibir por Genero \n");
        printf("(3) Exibir por Ranking \n");
        printf("(4) Exibir Favorito \n");
        printf("(0) Sair \n");

        scanf("%d", & op);
        setbuf(stdin, 0);
        switch(op)
        {
        case 0:
            break;
        case 1:
            cadastrarJogos(MAX);
            break ;
        case 2:
            exibirGenero(MAX);
            break ;
        case 3:
            exibirRanking(MAX);
            break ;
        case 4:
            exibirFavorito(MAX);
            break ;
        }
    }
    while (op != 0);
    return 0;

}

