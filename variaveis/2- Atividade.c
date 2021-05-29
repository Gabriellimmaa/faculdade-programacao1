#include <stdio.h>
#include <locale.h>

float n1, n2;

void menu()
{
    printf("---------------------------------------\n");
	printf("----          Calculadora          ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    setlocale( LC_ALL, "" );
    menu();
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("---------------------------------------\n");
    printf("Multiplicação: %.2f\n", n1*n2);
    printf("Divisão: %.2f\n", n1/n2);
    printf("Adição: %.2f\n", n1+n2);
    printf("Subtração: %.2f\n", n1-n2);
    printf("---------------------------------------");
}
