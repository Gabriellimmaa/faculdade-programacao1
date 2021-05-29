#include <stdio.h>
#include <locale.h>

void menu()
{
    printf("---------------------------------------\n");
	printf("----    Converter Dólar -> Real    ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    setlocale( LC_ALL, "" );
    int dolar;
    float real;
    menu();
    printf("Dólar: ");
    scanf("%i", &dolar);
    system("cls");
    menu();
    printf("1 dólar = 4,64 real");
    printf("\n%i dólares = %.2f reais", dolar, dolar*4.64);
    printf("\n---------------------------------------");
}
