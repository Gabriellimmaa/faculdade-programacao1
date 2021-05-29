#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int SomaDigitos(int inteiro)
{
    int soma;
    soma = 0;
    while(inteiro>0)
    {
        soma = soma + (inteiro%10);
        inteiro = inteiro/10;
    }
    return(soma);
}

int main()
{
	int n1, resultado;
	scanf("%d", &n1);
	resultado = SomaDigitos(n1);
	printf("%d", resultado);
	return 0;
}
