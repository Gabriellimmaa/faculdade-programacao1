#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char *frase;
	int i, tam;
	//le tam da string
	scanf("%d", &tam);
	getchar(); //ignorar o \n
	//aloca o vetor de caracteres de acordo com tam
	frase = (char *) malloc (tam * sizeof(char));
	if (frase == NULL) { //verifica se houve erro
		printf("Erro: memoria insuficiente!");
		exit(1);
	}
	//le string
	gets(frase);

	//variaveis auxiliares 
	int totalVogais = 0, totalCaracteres=0;
	float percentualVogais = 0;
	//retorna o total de caracteres
	totalCaracteres = strlen(frase);
	for(i=0; i < totalCaracteres; i++) {
		//verificar tanto vogais em maiuscula quanto em minuscula
		if(frase[i]=='a' || frase[i]=='A' || frase[i]=='e' || frase[i]=='E' || frase[i]=='i' || frase[i]=='I' || frase[i]=='o' || frase[i]=='O' ||
			frase[i]=='u' || frase[i]=='U') {
			totalVogais++; //contabiliza numero de vogais
		}
	}
	//calcular o percentual de vogais na string
	for(i=0; i <= totalCaracteres; i++) 
		percentualVogais =  (totalVogais * 100) / totalCaracteres;
	//saidas
	printf("Total caracteres na string: %d \n",totalCaracteres);
	printf("Total de vogais na string: %d \n",totalVogais);
	printf("Percentual de vogais na string: %.2f \n",percentualVogais);
	//libera memoria alocada
	free(frase);
	return 0;
}