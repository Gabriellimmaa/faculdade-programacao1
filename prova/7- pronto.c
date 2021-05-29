#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char nome[10000];
    int tamanho;

    // Recebendo string
    printf("Digite seu nome: ");
    scanf("%s",nome);

    // Contando caracteres da string
    tamanho = strlen(nome);
    printf("O total de caracteres da string e: %d\n", tamanho);

    // Contando vogais da string
    int cont=0;
    char vogais[11]= "AEIOUaeiou";
    for(int i=0;i<strlen(nome);i++)
    {
        for(int j=0;j<strlen(vogais);j++)
        {
            if(nome[i]==vogais[j])
            {
            cont++;
            }
        }
    }
    printf("A quantidade de vogais na string e: %d\n", cont);

    // Tirando a porcentagem
    printf("A porcentagem das vogais em relacao ao total de caracteres da string e: %d%%\n", (cont*100)/tamanho);
    return 0;
}
