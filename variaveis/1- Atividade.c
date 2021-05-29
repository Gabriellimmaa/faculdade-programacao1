#include <stdio.h>

void menu()
{
    printf("---------------------------------------\n");
	printf("---- Conversor Minutos -> Segundos ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    int minutos, segundos;
    menu();
	printf("Digite os minutos: ");
	scanf("%i", &minutos);
	system("cls");
    menu();
	printf("Minutos: %i\n", minutos);
	segundos = minutos*60;
    printf("Segundos: %i\n", segundos);
    printf("---------------------------------------\n");
	return 0;
}
