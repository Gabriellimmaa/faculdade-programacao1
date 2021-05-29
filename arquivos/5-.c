#include <stdio.h>

main() {
    FILE *arq;
    int opcao, c, a;
    char titulo[40];
    int nmr_registro;
    int preco;

    inicio:
    printf("1- Registrar dados\n2- Ler dados\nOpcao: ");
    scanf("%d", &opcao);
    switch (opcao){
        case 1 :
        system("cls");
        printf("Titulo: ");
        scanf("%s", &titulo);
        printf("Numero de registro: ");
        scanf("%d", &nmr_registro);
        printf("Preco: ");
        scanf("%d", &preco);

        arq=fopen("dados.txt","wb");
        fprintf(arq,"Titulo: %s \n", titulo);
        fprintf(arq,"Numero de registro: %d \n", nmr_registro);
        fprintf(arq,"Preco: %d.00 \n\n", preco);
        fclose(arq);

        printf("Todos esses dados foram registrados em dados.txt\n");
        system("cls");
        goto inicio;
        break;

        case 2 :
        system("cls");
        if ((arq=fopen("dados.txt","r")) != NULL) {
            while((c=fgetc(arq)) !=EOF) {
                printf("%c", c);
            }
            fclose(arq);
        }
        a=getch();
        system("cls");
        goto inicio;
        break;

        default:
        printf ("Valor invalido!\n");
    }

}
