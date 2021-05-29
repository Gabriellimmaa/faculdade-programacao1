#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *e, *s;
    char aux;
    int erro = 0, c;

    e = fopen("minusculo.txt" ,"r");
    if(e == NULL){
        printf("\Nao foi possivel abrir o arquivo de entrada!");
        erro=1;
    }

    s = fopen("maiusculo.txt" ,"w");
    if(s == NULL){
        printf("Nao foi possivel abrir o arquivo de saida!");
        erro=2;
    }

    if (!erro) while((c=fgetc(e))!=EOF){
        aux = toupper(c);
        fprintf(s,"%c",aux);
    }
    printf("Todos as letras foram convertidas para maiusculo e escrita em maiusculo.txt");
    fclose(e);
    fclose(s);
    return 0;
}
