#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b, c, maior_AB, maior;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    maior_AB = (a + b + abs(a - b)) / 2;
    maior = (maior_AB+c+abs(maior_AB-c))/2;
    printf("%d eh o maior", maior);
    return 0;
}
