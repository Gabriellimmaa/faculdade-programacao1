#include <stdio.h>
#include <locale.h>

void menu()
{
    printf("---------------------------------------\n");
	printf("----          Atividade 5          ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    setlocale( LC_ALL, "" );
    int n1, antecessor, sucessor;
    menu();
    printf("Digite um número: ");
    scanf("%i", &n1);
    system("cls");
    menu();
    antecessor = n1-1;
    sucessor = n1+1;
    printf("O antecessor de %i é %i", n1, antecessor);
    printf("\nO sucessor de %i é %i", n1, sucessor);
    printf("\n---------------------------------------\n");
}
