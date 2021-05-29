#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int matricula[30];
    float notas[30], notas2[20], media=0, soma=0;
    int count=0;
    int i, x;

    // Lendo as matriculas
    for(int i=0; i<30;i++)
    {
        printf("Digite o numero da matricula:\n");
        scanf("%d", &matricula[i]);
    }

    //Lendo 30 matriculas
    for(i=0; i<30; i++)
    {
        // Lendo as notas das 30 matriculas
        for(x=0; x<20; x++)
        {
            printf("Digite a nota da questao %d:", x+1);
            scanf("%f", &notas2[x]);
            notas2[x] = notas2[x]*0.5;
            notas[i]=notas2[x] + notas[i];
        }
        soma=soma+notas[i];
        // Calculando se a matricula tal esta acima da media
        if(notas[i]>=7.0)
        {
            count++;
        }
    }

    // Calculando a media
    media=soma/30;

    // Exibindo resultados
    for(i=0; i<30; i++)
    {
       printf("Matricula: %d    Nota: %.f\n", matricula[i], notas[i]);
    }
    printf("Nota media da turma e: %.f\n", media);
    printf("Percentual de aprovacao e: %d%%\n", (count*100)/30);

    return 0;
}
