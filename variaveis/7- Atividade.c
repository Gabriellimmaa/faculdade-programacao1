#include <stdio.h>
#include <locale.h>

void menu()
{
    printf("---------------------------------------\n");
	printf("----          Atividade 7          ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    setlocale( LC_ALL, "" );
    int a, b, c, d;
    menu();
    printf("Digite o valor da vari�vel 'a': ");
    scanf("%i", &a);
    printf("Digite o valor da vari�vel 'b': ");
    scanf("%i", &b);
    printf("Digite o valor da vari�vel 'c': ");
    scanf("%i", &c);
    printf("Digite o valor da vari�vel 'd': ");
    scanf("%i", &d);
    system("cls");
    menu();
    printf("A diferen�a � de: %i", ((a*b)-(c*d)));
    printf("\n---------------------------------------\n");
}
