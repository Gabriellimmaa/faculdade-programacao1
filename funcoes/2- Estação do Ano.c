#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int EstacaoAno(int dia, int mes){
    if (mes < 3 || (mes == 12 && dia >= 21) || (mes == 3 && dia <= 20))
        return("VERAO");
    else if (mes < 6 || (mes == 3 && dia >= 21) || (mes == 6 && dia <= 20))
        return("OUTONO");
    else if (mes < 9 || (mes == 6 && dia >= 21) || (mes == 9 && dia <= 20))
        return("INVERNO");
    else if ((mes < 12) || (mes == 9 && dia >= 21) || (mes == 12 && dia <= 20))
        return("PRIMAVERA");
}

int main(){
    int n1, n2, resultado;
    scanf("%d", &n1);
    scanf("%d", &n2);
    resultado = EstacaoAno(n1, n2);
    printf(resultado);
    return 0;
}
