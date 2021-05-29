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
    printf("Número do funcionário: ");
    scanf("%i", &num);
    printf("Número de horas trabalhadas: ");
    scanf("%i", &horas);
    printf("Valor por hora: ");
    scanf("%f", &valor_hora);
    system("cls");
    printf("---------------------------------------\n");
    printf("Número do funcionário: %i\n", num);
    printf("Salário: R$%2.f", horas*valor_hora);
    printf("\n---------------------------------------");

}
