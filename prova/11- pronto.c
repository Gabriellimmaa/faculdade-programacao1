#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float imprimePar(float n1, float n2){
    float a, b;

    // verificando as condicoes apresentadas
    if (n1>n2)
    {
        if (n1/2 <= 0.1 || n1/2 <= -0.1)
        {
            return printf("\n%.2f %.2f", n1, n2);
        }
    }
    else if(n2>n1)
    {
        if (n2/2 <= 0.1 || n2/2 <= -0.1)
        {
            return printf("\n%.2f %.2f", n1, n2);
        }
    }

    // definindo as variaveis
    a = n1 + n2;
    b = n2 - n1;

    // apresentando resultado
    if(a == 10 && b == 10)
    {
        return printf("\n%.2f %.2f", num1, n2);
    }

}

int main()
{
    float n1, n2;

    // Lendo 2 par de valores
    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o segundo numero: ");
    scanf("%f", &n2);

    //imprimindo a variavel
    imprimePar(n1, n2);

    return 0;
}

