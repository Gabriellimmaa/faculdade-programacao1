#include <stdio.h>
#include <stdlib.h>

// funcao recebe dimensoes de linhas e colunas como parametro
int** alocaMatriz(int l, int c) {
   int **matriz, i;
   //aloca um vetor de ponteiros - linhas
   matriz = (int **) malloc (l * sizeof(int *));
   if (matriz == NULL) //verifica se houve erro 
      exit(1);
   //percorre as linha do vetor de ponteiros
   for (i=0; i < l; i++) {
      //aloca um vetor de inteiros para cada posicao do vetor - colunas
      matriz[i] = (int *) malloc(c * sizeof(int));
      if (matriz[i] == NULL) //verifica se houve erro
         exit(1);
   }
   //retorna o ponteiro para a matriz alocada
   return matriz;
}

int** desalocaMatriz(int **matriz, int l) {
   if (matriz != NULL) {
      for (int i=0; i<l; i++) { 
         if (matriz[i] != NULL) 
            //libera linhas
            free(matriz[i]); 
         }
      }
      //libera matriz
      free(matriz); 
   return NULL;
}

//funcao recebe as matrizes e suas dimensoes como parametro
int** somaMatriz(int **mat1, int **mat2, int lin, int col) {
  int **soma;
  int i, j;
  //chama funcao responsavel pela alocacao
  soma = alocaMatriz(lin, col);
  //percorre e soma seus elementos
  for (i=0; i<lin; i++) {
    for (j=0; j<col; j++)
      soma[i][j] = mat1[i][j] + mat2[i][j];
  }
  //retorna o ponteiro para matriz soma
  return soma;
}

int main() {
  int **m1, **m2, **soma;
  int i, j;
  int l,c;
  //le as dimensoes da matriz
  scanf("%d %d", &l, &c);
  //chama a funcao p alocar matrizes
  m1 = alocaMatriz(l,c);
  m2 = alocaMatriz(l,c);

  printf("Lendo matriz 1...\n");
  for (i=0; i<l; i++) {
    for (j=0; j<c; j++)
      scanf("%d", &m1[i][j]);
  }
  printf("Lendo matriz 2...\n");
  for (i=0; i<l; i++) {
    for (j=0; j<c; j++)
      scanf("%d", &m2[i][j]);
  }
  //chama a funcao soma passando as matrizes e as dimensoes de l e c
  soma = somaMatriz(m1, m2, l,c);
  printf("Soma das matrizes..\n ");
  for (i=0; i<l; i++) {
    for (j=0; j<c; j++)
      printf("%d ", soma[i][j]);
    printf("\n");
  }
  return 0;
}