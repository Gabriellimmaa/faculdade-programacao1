#include <stdio.h>
#include <stdlib.h>

int main() {
   int *progI, *progII;
   int i, j, n, m, t1, t2;

   //le qtde de alunos de progI
   scanf("%d", &t1);
   //aloca array com t1 elementos
   progI = (int *) malloc(t1 * sizeof(int));
   if (progI == NULL) //verifica se houve erro
      exit(1);
   for (i=0; i < t1; i++) {
      scanf("%d", &progI[i]);
   }
   //le qtde de alunos de progII
   scanf("%d", &t2);
   //aloca array de t2 elementos
   progII = (int *) malloc(t2 * sizeof(int));
   if (progII == NULL) //verifica se houve erro
      exit(1);
   for (i=0; i < t2; i++) {
      scanf("%d", &progII[i]);
   }
   for (i=0; i < t1; i++) {
      for (j=0; j < t2; j++) {
         //verifica quem esta matriculado em ambas disciplinas
         if (progI[i] == progII[j])
         printf("%d ", progII[j]);
      }
   }
   return 0;
}