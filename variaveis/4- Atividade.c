#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale( LC_ALL, "" );
    int dinheiro, calculo, preco, cafe, cafe2;
    preco = 7;
    printf("==============================\n");
    printf("       MAQUINA DE CAFÉ\n");
    printf("==============================\n");
    printf("Café = R$ 7.00\n");
    printf("Só aceitamos notas de 5 reais\n");
    printf("==============================\n");
    printf("Quantos café: ");
    scanf("%i", &cafe);
    system("cls");
    cafe2 = (cafe*preco);
    printf("Preço: R$%i.00", cafe2);
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
            printf ("A maquina só aceita notas de 5 reais");
            printf("\n=====================================\n");
        }
}
