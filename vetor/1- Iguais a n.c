#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define TAM 101
int main(){
    int n, i, vetor[TAM];

    for (i=0;i<TAM;i++){
        scanf("%d", &vetor[i]);
    }
    n = vetor[100];
    for (i=0;i<100;i++){
        if (vetor[i] == n){
            printf("%d\n", i);
        }
    }

    return 0;
}
