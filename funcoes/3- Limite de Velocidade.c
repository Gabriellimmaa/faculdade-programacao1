#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int CalculaMulta(int velocidade)
{
    if (velocidade <= 50)
    {
        return 0.0;
    }
    if (velocidade <= 55)
    {
        return(230);
    }
    if (velocidade <= 60)
    {
        return(340);
    }
    if (velocidade > 60)
    {
        return(19.28 * (velocidade - 50));
    }
}

int main(){
	int v1;
	float resultado;
	scanf("%d", &v1);
	resultado = CalculaMulta(v1);
	printf("%.2f", resultado);
	return 0;
}
