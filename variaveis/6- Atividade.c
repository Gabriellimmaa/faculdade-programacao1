#include <stdio.h>
#include <locale.h>

void menu()
{
    printf("---------------------------------------\n");
	printf("----      Restaurante COMABEM      ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    setlocale( LC_ALL, "" );
    float gastos;
    menu();
    printf("Valor gasto do cliente: ");
    scanf("%f", &gastos);
    system("cls");
    menu();
    printf("Valor gasto do cliente: %.2f\n", gastos);
    printf("Porcentagem do garçom: %.2f\n", gastos*0.10);
    printf("---------------------------------------\n");
    printf("Valor a ser pago R$ %.2f", (gastos+(gastos*0.10)));
    printf("\n---------------------------------------\n");
}
