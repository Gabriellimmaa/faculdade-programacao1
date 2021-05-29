
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char escolha[10000], var;
    int i=0, j, boliche=0, cinema=0;

    int retorno;

    for(i;i<6;i++) {
        scanf("%s", &escolha);
        retorno=strcmp(strlwr(escolha), "boliche");
        if(retorno == 0){
            boliche++;
        } else {
            cinema++;
        }
    }
    if(cinema>boliche) {
        printf("CINEMA");
    } else {
        printf("BOLICHE");
    }

    return 0;
}

