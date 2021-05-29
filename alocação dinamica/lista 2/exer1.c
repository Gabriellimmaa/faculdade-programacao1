#include <stdio.h>
#include <stdlib.h>

int main() {
	int **matriz, *vet, l, c;
	int i, j, k; //indices para as matrizes e o vetor
	//le as dimensoes da matriz
	scanf("%d %d", &l, &c);
	//aloca linhas da matriz
	matriz = (int **) malloc (l * sizeof(int *));
  	if (matriz == NULL) { //verfica se houve erro
  		printf("Erro: memoria insuficiente!");
      	exit(1);
    }
    //aloca colunas da matriz
  	for (i=0; i < l; i++) {
    	matriz[i] = (int *) malloc(c * sizeof(int));
    	if (matriz[i] == NULL) { //verifica se houve erro
    		printf("Erro: memoria insuficiente!");
        	exit(1);
    	}
  	}
  	int tam = l*c;
  	//aloca um vetor de 10 elementos
  	vet = (int *) malloc (l*c * sizeof(int));
  	if (vet == NULL) { //verifica se houve erro
    	printf("Erro: memoria insuficiente!");
        exit(1);
    }
    //le os elementos da matriz
    k=0;
	for (i=0; i < l; i++){
		for (j=0; j < c; j++){ 
			scanf("%d", &matriz[i][j]); //mat[i][j]=random()%100; 
			//verifica aqueles que sao multiplo de 7 e impares
			if (matriz[i][j] % 7 == 0 && matriz[i][j] % 2 != 0) {
				vet[k] = matriz[i][j];
				k++;
			}
		}
	}
	//imprime vetor resultante
	for (i=0; i < k; i++)
		printf("%d ", vet[i]);
	//liberando memoria alocada
	for (i=0; i<l; i++) 
		free(matriz[i]);
	free(matriz);
	free(vet);
	return 0;
}