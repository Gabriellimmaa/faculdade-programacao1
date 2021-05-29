#include <stdio.h>
#include <stdlib.h>

int funcao(int n) {
    int bin[8];
    int aux;
    for (aux = 7; aux >= 0; aux--)
    {
        if (n % 2 == 0)
            bin[aux] = 0;
        else
            bin[aux] = 1;
        n = n / 2;
    }

    for (aux = 0; aux < 8; aux++)
        printf("%d", bin[aux]);
}

int main() {
    int n;
    scanf("%d", &n);
    funcao(n);
}
