#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    // Variaveis
	int num[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	int lugares[12]={0,0,0,0,0,0,0,0,0,0,1,2},o,a,c,c1;
	char origem[12][15]={"cuiaba","moscow","tokio","sao paulo","rio","marrocos","curitiba","sao paulo","nova iorque","okinawa","roma","vietnam"};
	char destino[12][15]={"salvador","curitiba","veneza", "cuiaba","moscow","tokio","sao paulo","rio de janeiro","marrocos","nova iorque","okinawa","registro"};

    MENU:
        system("cls");
        printf("\nEscolha sua opcao ");
        printf("\n  1- Consultar");
        printf("\n  2- Efetuar reserva");
        printf("\n  3- Sair");
        printf("\n\nDigite uma opcao: ");
        scanf("%d",&o);

        // Escolhendo opcao
        switch (o){
            case 1:
                system("cls");
                printf("\nEscolha sua opcao ");
                printf("\n  4- Por numero de voo");
                printf("\n  5- Por origem");
                printf("\n  6- Por destino");
                printf("\n\nDigite a opcao: ");
                scanf("%d",&c);
                // Pegando dados conforme os paramentros definidos
                if(c==4){
                    printf("\n");
                    for (a=0;a<=11;a++){
                            printf(" %d",num[a]);
                    }
                    printf("\n\n");
                }
                else if(c==5){
                    printf("\n");
                    for (a=0;a<=11;a++){
                        printf(" %s ",origem[a]);

                    }
                    printf("\n\n");
                }
                else if(c==6){
                    printf("\n");
                    for (a=0;a<=11;a++){
                        printf(" %s",destino[a]);
                    }
                    printf("\n\n");
                }
                else{
                    // Tratamento de erro
                    system("cls");
                    printf("\nOpcao inexistente");
                    getch();
                    goto MENU;
                }
                getch();
                goto MENU;
            case 2:
                printf("\nDigite o numero do voo: ");
                scanf("%d",&c1);
                // Tratamento de erro
                if (c1 < 0 || c1 > 12){
                    system("cls");
                    printf("\nOpcao inexistente");
                    getch();
                    goto MENU;
                }
                // Pegando dados conforme os paramentros definidos
                else if(c1!=num[c1-1]){
                    printf("\nVoo inexistente\n");
                }
                else if(lugares[c1-1]>0){
                    printf("\nReserva confirmada\n");
                }
                else{
                    printf("\nVoo lotado\n");
                }
                getch();
                goto MENU;
            case 3:
                // Fechando o programa
                exit (EXIT_FAILURE);
                break;
        }
return 0;
}
