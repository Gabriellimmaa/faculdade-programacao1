#include <stdio.h>
#include <stdlib.h>

struct bancoDados {
   int numVoo;
   int totalLugares;
   int numLugares;
};

int buscar(int *op) {
    struct bancoDados dados;
    FILE *arq;
    if((arq = fopen("exer1.rec", "rb")) == NULL) {
      exit(1);
    }

    while(fread(&dados, sizeof(dados), 1, arq) == 1) {
        if (dados.numVoo == op){
            printf("\nNumero voo: %d\n", dados.numVoo);
            printf("Total de lugares: %d\n", dados.totalLugares);
            printf("Lugares marcados: %d\n\n", dados.numLugares);
        }
    }
    return(0);
}

int main() {
    int op;
    int err = -1;
    struct bancoDados dados;
    FILE *arq;
    if((arq = fopen("exer1.rec", "rb")) == NULL) {
      exit(1);
    }

    //Em seguida, implemente um programa para (b) ler o arquivo gerado no item (a) e mostrar os dados na tela.

    while(fread(&dados, sizeof(dados), 1, arq) == 1) {
        printf("Numero voo: %d\n", dados.numVoo);
        printf("Total de lugares: %d\n", dados.totalLugares);
        printf("Lugares marcados: %d\n\n", dados.numLugares);
    }
    fclose(arq);


    //O programa deve solicitar ao usuario o numero do voo, e caso esse numero
    //seja localizado, devem ser exibidos os dados do respectivo voo na tela.

    printf("--------------------------------\nBuscar voo\n");
    printf("Digite o numero do voo: ");
    scanf("%d", &op);
    err = buscar(op);
    if(err < 0)
    {
        return err;
    }

    return 0;
}
