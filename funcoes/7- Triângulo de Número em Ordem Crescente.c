#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int num,cont;

int main(){
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        cont=1;
        while(cont<=i){
            printf("%d",i);
            cont++;
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
