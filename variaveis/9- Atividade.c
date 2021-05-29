#include <stdio.h>
#include <locale.h>

void menu()
{
    printf("---------------------------------------\n");
	printf("----     Locadora SAI DA FRENTE    ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    setlocale( LC_ALL, "" );
    int diaria;
    float valor_total, quilometragem;
    menu();
    printf("Valor de aluguel: R$30,00\n");
    printf("Valor por KM rodado: R$0,01\n");
    printf("\---------------------------------------\n");
    printf("Desconto no valor total de 10%%");
    printf("\n---------------------------------------\n");
    printf("Quantas diárias: ");
    scanf("%i", &diaria);
    printf("Quantos quilomêtros: ");
    scanf("%f", &quilometragem);
    system("cls");
    menu();
    valor_total = ((diaria*30)+(quilometragem*0.01));
    printf("Valor total: %.2f\n", valor_total);
    printf("Valor com desconto: %.2f", (valor_total-(valor_total*0.10)));
    printf("\n---------------------------------------");
}
