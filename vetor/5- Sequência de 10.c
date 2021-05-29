#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define TAM 10

int main(){
    int lista[TAM];
    int i, x, count = 0;
    for (i=0;i < TAM;i++){
        scanf("%d", &lista[i]);
    }
    x = lista[9];
    for (i=0;i<TAM;i++){
        if (lista[i] == x){
            ++count;
        }
    }
    printf("O numero %d apareceu %d vezes", x, count);
    return 0;
}
