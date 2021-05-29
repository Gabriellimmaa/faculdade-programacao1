/******************************************************************************
comparar strings

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavraA[10000];
    char palavraB[10000];
    int retorno;
    
    scanf("%s", &palavraA);
    scanf("%s", &palavraB);
    
    retorno=strcmp(palavraA, palavraB);
    
    if(retorno==0){
        printf("IGUAIS");
    } else {
        printf("DIFERENTES");
    }
    return 0;
}
 
