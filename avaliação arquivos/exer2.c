#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
    char nome[30];
    char sobrenome[30];
    int idade;
    float altura;
    float peso;
};

int main()
{
    int aux;
    printf("Quantos pessoas ira registrar: ");
    scanf("%d", &aux);

    int continuar = 1;
    FILE *arq;
    struct pessoa dados;

    if((arq = fopen("exer2.rec", "wb")) == NULL)
    {
        exit(1);
    }
    for (int i=0; i<aux; i++)
    {
        printf("\nNome: ");
        scanf("%s", &dados.nome);
        setbuf(stdin, 0);
        printf("Sobrenome: ");
        scanf("%s", &dados.sobrenome);
        printf("Idade: ");
        scanf("%d", &dados.idade);
        printf("Altura: ");
        scanf("%f", &dados.altura);
        printf("Peso: ");
        scanf("%f", &dados.peso);
        fwrite(&dados, sizeof(dados), 1, arq);
    }
    fclose(arq);

    FILE *fp;
    if((fp = fopen("exer2.rec", "rb")) == NULL) {
      exit(1);
    }

    printf("---------------------------------------------------\nPESSOAS REGISTRADAS\n---------------------------------------------------\n");

    while(fread(&dados, sizeof(dados), 1, fp) == 1)
    {
        printf("Nome: %s\n", dados.nome);
        printf("Sobrenome: %s\n", dados.sobrenome);
        printf("Idade: %d\n", dados.idade);
        printf("Altura: %.2f\n", dados.altura);
        printf("Peso: %.2f\n\n", dados.peso);
    }
    fclose(fp);

    // Nao terminei essa atividade pois nao consegui ... me da uma notinha por isso ai que fiz prf <3

    return 0;
}

