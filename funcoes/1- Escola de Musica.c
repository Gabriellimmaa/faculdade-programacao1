#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ClassificaAluno(float media, int faltas){
    if (faltas <= 10 && media >= 9.5){
        return("APROVADO COM LOUVOR");
    }
    if (faltas <= 10 && media >= 7){
        return("APROVADO");
    }
    if (faltas > 10 && media >=7){
        return("REPROVADO POR FALTAS");
    }
    if (media < 7){
        return("REPROVADO");
    }
}

int main(){
    int inteiro, resultado;
    float real;
    scanf("%f", &real);
    scanf("%i", &inteiro);
    resultado = ClassificaAluno(real, inteiro);
    printf(resultado);
    return 0;
}
