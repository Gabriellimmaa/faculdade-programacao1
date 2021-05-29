#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bancoDados {
   int numVoo;
   int totalLugares;
   int numLugares;
};

int main() {
    int continuar = 1;
    FILE *arq;
    struct bancoDados dados;

    if((arq = fopen("exer1.rec", "wb")) == NULL) {
        exit(1);
    }
    while (continuar != 0) {
        printf("Numero voo: ");
        scanf("%d", &dados.numVoo);

        if(dados.numVoo == 0){
            exit(1);
        }

        printf("Total lugares: ");
        scanf("%d", &dados.totalLugares);
        printf("Lugares marcados: ");
        scanf("%d", &dados.numLugares);
        printf("\n");


        fwrite(&dados, sizeof(dados), 1, arq);
   }
   fclose(arq);
   return 0;
}

