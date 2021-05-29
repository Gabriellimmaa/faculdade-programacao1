#include <stdio.h>
#include <stdlib.h>


// funcao para puxar o maior nmr de faltas e sua respectiva matricula
void menormaior(int n, int m, int **mat, int *menor, int *maior, int *maior_aluno) {
    int i,j;

    *maior = mat[0][1];
    *maior_aluno = mat[0][0];
    for (i = 0; i < n; i++) {
        if (*maior < mat[i][1]) {
            *maior = mat[i][1];
            *maior_aluno = mat[i][0];
        }
    }
    return;
}


int main() {
    int l,c=2, i, j;
    float media;
    int **matriz, maior, menor, maior_aluno;

    // lendo quantidade de alunos
    printf("Insira um numero de alunos a cadastrar: ");
    scanf("%d", &l);

    // Alocando linhas e colunas da matriz
	matriz = (int**) malloc(l * sizeof(int*));
	if (matriz == NULL)
		exit(1);
	for (i=0; i < l; i++) {
		matriz[i] = (int*) malloc(c * sizeof(int));
		if (matriz[i] == NULL)
			exit(1);
	}

	//Lendo elementos
    system("cls");
	printf("\nInsira em ordems os seguintes itens:\n1- Numero da matricula\n2- Quantidade de faltas\n\n");
    for (i=0; i<l; i++) {
		for (j=0; j<c; j++)
			scanf("%d", &matriz[i][j]);
	}

	// Calculando media e maior
    menormaior(l,c,matriz,&menor,&maior,&maior_aluno);
	for (i=0; i<l;i++){
        media = media + matriz[i][1];
	}
    media = media/l;

    //Exibindo valores
    system("cls");
    printf("-----------------------------------------------------------------------\n");
    printf("Media de faltas em relacao a quantidade de alunos: %.2f\n", media);
    printf("-----------------------------------------------------------------------\n");
    printf("Maior numero de faltas \n\nMatricula: %d\nFaltas: %d\n", maior_aluno, maior);
    printf("-----------------------------------------------------------------------\n");

	// liberar memoria alocada
    for (i=0; i<l; i++)
		free(matriz[i]);
	free(matriz);
    return 0;
}
