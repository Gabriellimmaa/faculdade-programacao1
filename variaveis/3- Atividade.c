#include <stdio.h>
#include <locale.h>

float a, b, c, var;

void menu()
{
    printf("---------------------------------------\n");
	printf("----          Atividade 3          ----\n");
	printf("---------------------------------------\n");
}

int main()
{
    setlocale( LC_ALL, "" );
    menu();
    printf("Digite o valor da variável 'a': ");
    scanf("%f", &a);
    printf("Digite o valor da variável 'b': ");
    scanf("%f", &b);
    printf("Digite o valor da variável 'c': ");
    scanf("%f", &c);
    printf("---------------------------------------\n");
    printf("a) %.2f\n", ((a*b)/c) );
    printf("b) %.2f\n", ((a*a)+b+5*c) );
    printf("c) %.2f\n", (a*b*c+b+(c/3)*(5-1)));
    var = (a*b*c)*(a*b*c);
    printf("d) %.2f\n", ((var*(a*b*c))/2));
    printf("---------------------------------------\n");
}
