#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale( LC_ALL, "" );
    int dinheiro, calculo, preco, cafe, cafe2;
    preco = 7;
    printf("==============================\n");
    printf("       MAQUINA DE CAF�\n");
    printf("==============================\n");
    printf("Caf� = R$ 7.00\n");
    printf("S� aceitamos notas de 5 reais\n");
    printf("==============================\n");
    printf("Quantos caf�: ");
    scanf("%i", &cafe);
    system("cls");
    cafe2 = (cafe*preco);
    printf("Pre�o: R$%i.00", cafe2);
    printf("\ninsira seu dinheiro: ");
    scanf("%i", &dinheiro);
    if (dinheiro%5 == 0)
        {
            calculo = (dinheiro - cafe2);
            printf("==============================\n");
            printf("A maquina recebeu: R$%i.00", calculo);
            printf("\n==============================\n");
        }
    else
        {
            printf("\n=====================================\n");
            printf ("A maquina s� aceita notas de 5 reais");
            printf("\n=====================================\n");
        }
}
