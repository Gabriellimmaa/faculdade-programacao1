#include <stdio.h>
#include <locale.h>

void menu()
{
    printf("---------------------------------------\n");
	printf("----    Converter D�lar -> Real    ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    setlocale( LC_ALL, "" );
    int dolar;
    float real;
    menu();
    printf("D�lar: ");
    scanf("%i", &dolar);
    system("cls");
    menu();
    printf("1 d�lar = 4,64 real");
    printf("\n%i d�lares = %.2f reais", dolar, dolar*4.64);
    printf("\n---------------------------------------");
}
