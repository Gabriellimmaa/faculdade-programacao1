#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float preco[5][20], menor_preco[5][20];

    /* Funnção para pegar preco de todas as lojas */
    for(int aux1=0;aux1<=4;aux1++)
    {
        for(int aux2=0;aux2<=19;aux2++)
        {
          printf("Qual o preco do produto %d da loja %d: ",aux2+1,aux1+1);
          scanf("%f",&preco[aux1][aux2]);
          fflush(stdin);
        }
    }

    /* Funnção para ordenar os precos */
    for(int i=0 ; i<=4 ; i++)
    {
        menor_preco[i][0] = preco[i][0];
        menor_preco[i][1] = 0;
        for(int j = 1;j<=19;j++)
        {
            if(preco[i][j]<menor_preco[i][0])
            {
                menor_preco[i][0] = preco[i][j];
                menor_preco[i][1] = j;
            }
        }
    }

    /* Exibir resultado */
    system("cls");
    for(int i = 0;i<=4;i++)
    {
        printf("Loja %d\n", i+1);
        printf("    Produto: %.0f\n    Preco: %.2f\n", menor_preco[i][1], menor_preco[i][0]);
    }
    return 0;
}
