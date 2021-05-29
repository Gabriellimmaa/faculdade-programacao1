#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int i , j, aux, TAM;
    scanf ("%d", &TAM);
    int vet[TAM];
    for (i=0; i <TAM; i ++)
        scanf ("%d", &vet[i]);

    for ( i =0; i <TAM; i ++) {
        for ( j = i +1; j <TAM; j ++) { // percorre a partir da posicao i+1
            if ( vet [ i ] > vet [ j ]) { // troca
                aux = vet [ i ];
                vet [ i ] = vet [ j ];
                vet [ j ] = aux ;
            }
        }
    }

    for ( i =0; i <TAM; i ++) { // imprime na ordem
        printf ("[");
        printf ("%d", vet[i]);
        printf ("]");
    }
    return 0;
}
