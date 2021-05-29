#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void menu_cadastro() {
    system("cls");
    printf("---------------------------------------\n");
    printf("     Cadastrar unidades do estoque\n");
    printf("---------------------------------------\n");
    return menu_cadastro;
}

void relatorio() {
    system("cls");
    printf("------------------------------------------------------------------------------\n");
    printf("                               Relatorio\n");
    return relatorio;
}

void menu_estoque_por_loja() {
    system("cls");
    printf("------------------------------------------------------------------------------\n");
    printf("                    Unidades em estoque na rede de lojas\n");
    printf("------------------------------------------------------------------------------\n");
    return menu_estoque_por_loja;
}

void menu_estoque_por_loja2() {
    system("cls");
    printf("------------------------------------------------------------------------------\n");
    printf("                        Estoque por loja\n");
    printf("------------------------------------------------------------------------------\n");
    return menu_estoque_por_loja2;
}


void menu() {
    printf("------------------------------------------------------------------------------\n");
    printf("                        Controle de estoque\n");
    printf("------------------------------------------------------------------------------\n");
    printf(" [1] Cadastrar estoque\n");
    printf(" [2] Analisar o estoque em cada loja\n");
    printf(" [3] Numero total de unidades em estoque na rede de lojas\n");
    printf(" [4] Relatorio\n");
    printf(" [5] Consultar loja\n");
    printf(" [6] Editar estoque\n");
    printf(" [7] Sair\n");
    printf("------------------------------------------------------------------------------\n");
    printf("opcao: ");
    return menu;
}


int main() {
    int lojas[8][26];
    int linha, coluna, opcao, auxiliar1;
    int produtos[26];
    INICIO:
    system("cls");
    menu();
    scanf("%i", &opcao);
    switch (opcao){
        case 1:
            for (linha=1;linha < 8;linha++){
                for(coluna=1;coluna < 26;coluna++){
                    menu_cadastro();
                    printf(" Loja: %i\n Produto: %i\n", linha, coluna);
                    printf("---------------------------------------\n");
                    printf("Estoque: ");
                    scanf("%i", &lojas[linha][coluna]);
                    system("cls");
                }
            }
            goto INICIO;
        case 2:
            menu_estoque_por_loja2();
            for (linha=1;linha < 8;linha++){
                printf("Loja: %i\n", linha);
                printf(" Codigo dos produtos que estao com estoque inferior a 15 unidades:\n");
                for(coluna=1;coluna < 26;coluna++){
                    if (lojas[linha][coluna] < 15){
                        printf(" %i,", coluna);
                    }
                }
                auxiliar1 = 0;
                printf("\n\n Numero de produtos que apresentam estoque de 15 a 25 unidades:\n");
                for(coluna=0;coluna < 26;coluna++){
                    if (lojas[linha][coluna] >= 15 && lojas[linha][coluna] <= 25){
                        auxiliar1 = auxiliar1 +1;
                    }
                }
                printf(" %i\n", auxiliar1);
                printf("------------------------------------------------------------------------------\n");
            }
            printf("Pressione ENTER para voltar ao menu");
            getch();
            goto INICIO;
        case 3:
            menu_estoque_por_loja();
            for(coluna=1;coluna < 26;coluna++){
                auxiliar1 = 0;
                for (linha=1;linha < 8;linha++){
                    auxiliar1 = auxiliar1 + lojas[linha][coluna];
                }
                produtos[coluna] = auxiliar1;
            }
            for(coluna=1;coluna < 26;coluna++){
                printf("Produto: %i     Estoque: %i\n", coluna, produtos[coluna]);
            }
            printf("------------------------------------------------------------------------------\n");
            printf("Pressione ENTER para voltar ao menu");
            getch();
            goto INICIO;
        case 4:
            relatorio();
            for (linha=1;linha < 8;linha++){
                printf("------------------------------------------------------------------------------\n");
                printf("Loja %i\n\n", linha);
                for(coluna=1;coluna < 26;coluna++){
                    printf("  Produto: %i     Estoque: %i\n", coluna, lojas[linha][coluna]);
                }
            }
            printf("------------------------------------------------------------------------------\n");
            printf("Pressione ENTER para voltar ao menu");
            getch();
            goto INICIO;
        case 5:
            menu_estoque_por_loja();
            printf("Numero da loja: ");
            scanf("%i", &opcao);
            if (opcao > 0 && opcao < 8){
                menu_estoque_por_loja();
                printf(" Loja %i\n", opcao);
                printf("---------------------------------------\n");
                for(coluna=0;coluna < 26;coluna++){
                    printf("Produto: %i     Estoque: %i\n", coluna, lojas[opcao][coluna]);
                }
                printf("---------------------------------------\n");
                printf("Pressione ENTER para voltar ao menu");
                getch();
                goto INICIO;
            }else{
                printf("---------------------------------------\n");
                printf("Loja nao encontrada!\n");
                printf("---------------------------------------\n");
                printf("Pressione ENTER para voltar ao menu");
                getch();
                goto INICIO;
            }
        case 6:
            menu_cadastro();
            printf("Numero da loja: ");
            scanf("%i", &opcao);
            if (opcao > 0 && opcao < 8){
                for(coluna=1;coluna < 26;coluna++){
                    menu_cadastro();
                    printf(" Loja: %i\n Produto: %i\n", opcao, coluna);
                    printf("---------------------------------------\n");
                    printf("Estoque: ");
                    scanf("%i", &lojas[opcao][coluna]);
                    system("cls");
                }
                printf("---------------------------------------\n");
                printf(" Edicao de estoque concluida\n");
                printf("---------------------------------------\n");
                printf("Pressione ENTER para voltar ao menu");
                getch();
                goto INICIO;
            }else{
                printf("---------------------------------------\n");
                printf("Loja nao encontrada!\n");
                printf("---------------------------------------\n");
                printf("Pressione ENTER para voltar ao menu");
                getch();
                goto INICIO;
            }
        case 7:
            break;
            return 0;
        default:
            goto INICIO;
    }
    return 0;
}
