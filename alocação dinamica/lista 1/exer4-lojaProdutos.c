#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
	char rua[50];
	char bairro[50];
};
struct loja {
	char nome[50];
	struct endereco ender;
	char telefone[20];
	float preco;
};

int main() {
	struct loja *lojas;
	int i, n;
	float media, soma=0;
	//numero de lojas a cadastrar
	scanf("%d", &n);
	//aloca um vetor de struct com n lojas
	lojas = (struct loja *) malloc (n * sizeof(struct loja));
	if (lojas == NULL) //verifica se houve erro
		exit(1);
	//le dados das lojas
	for (i=0; i < n; i++){
		getchar();
		fgets(lojas[i].nome, 50, stdin);
		fgets(lojas[i].ender.rua, 50, stdin);
		fgets(lojas[i].ender.bairro, 50, stdin);
		fgets(lojas[i].telefone, 20, stdin);
		scanf("%f", &lojas[i].preco);
	}
	//calcula media de precos das lojas
	for (i=0;i<n;i++)
		soma = soma + lojas[i].preco;
	media = soma / n;
	printf("Media de precos: %.2f\n", media);
	//lojas com preco abaixo da media
	for (i=0;i<n;i++){
		if (lojas[i].preco < media)
			printf(" %s %s %s %s ", lojas[i].nome, lojas[i].ender.rua, 
				                     lojas[i].ender.bairro, lojas[i].telefone);
	}
	return 0;
}