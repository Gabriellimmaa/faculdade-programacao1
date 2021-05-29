#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i,n,TAM;
    scanf("%d",&TAM);
    int vet[TAM];
    for(i=0;i<TAM;i++){
        scanf("%d",&n);
        vet[i]=n;
    }

    for(i=0;i<TAM;i++){
        printf("%d ",vet[TAM-(i+1)]);
    }

    return 0;
}
