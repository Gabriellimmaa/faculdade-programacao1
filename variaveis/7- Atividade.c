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
    printf("Digite o valor da variável 'a': ");
    scanf("%i", &a);
    printf("Digite o valor da variável 'b': ");
    scanf("%i", &b);
    printf("Digite o valor da variável 'c': ");
    scanf("%i", &c);
    printf("Digite o valor da variável 'd': ");
    scanf("%i", &d);
    system("cls");
    menu();
    printf("A diferença é de: %i", ((a*b)-(c*d)));
    printf("\n---------------------------------------\n");
}
