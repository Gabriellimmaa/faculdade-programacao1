#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    // Variaveis
    int comida=0, aluguel=0, roupa=0, agua=0, divertimento=0, total;
    float quantidade_gasta;
    char opcao;
    int opcao2, stop;
    int segundo = 30;

    //Laço repeticao
    while(opcao!='s')
    {
        system("cls");
        printf("\nEscolha sua opcao ");
        printf("\n  1- Atualizar Orcamento");
        printf("\n  2- Visualizar Orcamento Atual");
        printf("\n  3- Encerrar Sessao");
        printf("\n\nDigite uma opcao: ");

        fflush(stdin);
        opcao= getch();

        // Verificando opcao escolhida
        switch(opcao)
        {
            case '1':
                fflush(stdin);
                system("cls");
                printf("\nCategorias de orcamento\n");
                printf("  1- Comida\n");
                printf("  2- Aluguel\n");
                printf("  3- Roupa\n");
                printf("  4- Agua/Luz\n");
                printf("  5- Divertimento");
                printf("\n\nDigite uma opcao: ");
                scanf("%i",&opcao2);

                // Definindo os valores para as categorias
                if (opcao2 == 1){
                    system("cls");
                    printf("\nDigite o orcamento para comida: ");
                    scanf("%i",&comida);
                    break;
                }
                else if (opcao2 == 2){
                    system("cls");
                    printf("\nDigite o orcamento para aluguel: ");
                    scanf("%i",&aluguel);
                    break;
                }
                else if (opcao2 == 3){
                    system("cls");
                    printf("\n\nDigite o orcamento para roupa: ");
                    scanf("%i",&roupa);
                    break;
                }
                else if (opcao2 == 4){
                    system("cls");
                    printf("\nDigite o orcamento para agua/luz: ");
                    scanf("%i",&agua);
                    break;
                }
                else if (opcao2 == 5){
                    system("cls");
                    printf("\nDigite o orcamento para divertimento: ");
                    scanf("%i",&divertimento);
                    break;
                }
            case '2':
                // Calculando o orcamento total
                system ("cls");
                total = comida+aluguel+roupa+agua+divertimento;
                printf("\nOrcamento Atual\n    %i", total);
                printf("\n\nPrecione ENTER para voltar ao menu");
                while(getchar()!='\n');
                getchar();
                break;
            case '3':
                // Fechando o console
                opcao='s';
                break;

            default:
                system("cls");
                break;
      }
   }
}

