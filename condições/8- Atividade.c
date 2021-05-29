#include <stdio.h>

int main(){
    int  A, B, C, menor;
	printf("Primeiro numero: ");
    scanf("%i", &A);
	printf("Segundo numero: ");
    scanf("%i", &B);
	printf("Terceiro numero: ");
	scanf("%i", &C);
	if ((A<B) && (A<C)){
        printf ("Menor e %i ", A);
	}
	else{
        if ((B<A) && (B<C))
            printf("Menor e %i", B);
        else
            printf("Menor e %i", C);
	}
}
