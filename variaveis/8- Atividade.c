#include <stdio.h>
#include <locale.h>

void menu()
{
    printf("---------------------------------------\n");
	printf("----          Atividade 8          ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    setlocale( LC_ALL, "" );
    int num, horas;
    float valor_hora;
    menu();
    printf("N�mero do funcion�rio: ");
    scanf("%i", &num);
    printf("N�mero de horas trabalhadas: ");
    scanf("%i", &horas);
    printf("Valor por hora: ");
    scanf("%f", &valor_hora);
    system("cls");
    printf("---------------------------------------\n");
    printf("N�mero do funcion�rio: %i\n", num);
    printf("Sal�rio: R$%2.f", horas*valor_hora);
    printf("\n---------------------------------------");

}
