#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float media, desvio, soma = 0;
    int acimaMedia, i, n = 1, tam = i;
    i = 0;
    float lista[i];
    for (i=0;n != 0;i++){
        scanf("%f", &lista[i]);
        if (lista[i] == -1)
            n = 0;
        printf("%f\n", lista[i]);
    }

    for (i=0;i<tam;i++) {
        soma = soma + lista[i];
    }
	return 0;
}
