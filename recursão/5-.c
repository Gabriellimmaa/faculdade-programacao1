#include <stdio.h>
#include <stdlib.h>

int funcao(int n1, int n2) {
    int i, soma = 1;
    for(i=0;i < n2;i++){
        soma = soma * n1;
    }
    printf("%d", soma);
}

int main() {
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);
    funcao(x, n);
}
