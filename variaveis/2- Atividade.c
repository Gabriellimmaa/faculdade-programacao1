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
    printf("Multiplica��o: %.2f\n", n1*n2);
    printf("Divis�o: %.2f\n", n1/n2);
    printf("Adi��o: %.2f\n", n1+n2);
    printf("Subtra��o: %.2f\n", n1-n2);
    printf("---------------------------------------");
}
