#include <stdio.h>
#include <stdlib.h>

int funcao(int n1, int n2) {
    int i, soma = 0;
    for(i=0;i < n1;i++){
        soma = soma + n2;
    }
    printf("%d", soma);
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    funcao(n1, n2);
}
