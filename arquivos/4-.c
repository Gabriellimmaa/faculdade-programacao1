#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int array[10] ;
    FILE *arq;
    int i,j, tamanho;

    printf("Qual o tamanho do array: ");
    scanf("%d", &tamanho);

    printf("Digite os valores: ")
    for(int i=0;i<tamanho;i++)
      scanf("%d", &array[i]);

    arq=fopen("array.dat","wb");
    if (!arq) puts("Failed to open file");
    fwrite(array, sizeof(int), tamanho, arq);
    fclose(arq);
    printf("feito")
    return 0 ;
}
