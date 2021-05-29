#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funcao para ver quantos caracteres tem no .txt
int qtd_caracteres (){
    FILE * arq = fopen("teste.txt", "r") ;

	int contaCaracteres = 0;
	char c;
	while ((c = getc(arq)) != EOF) {
		contaCaracteres++;
	}
	return contaCaracteres;
}

int main()
{
    char str[qtd_caracteres()];
    FILE * arq = fopen("teste.txt", "r") ;

    if (arq == NULL)
        exit (1) ;
    int count = 0;
    while (fgets(str, qtd_caracteres(), arq) != NULL )
    {
        count ++;
        printf("%d:%s", count, str) ;
    }
    fclose(arq);

    return 0;
}
