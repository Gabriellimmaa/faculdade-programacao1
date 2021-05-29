#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, var;
    char frase[1000];
    scanf("%i", &n);
    var = n + 1;
    for (i=0;i<var;i++){
        scanf("%s", frase);
    }
    printf("%s", strrchr(frase, ' ') + 1);
	return 0;
}
