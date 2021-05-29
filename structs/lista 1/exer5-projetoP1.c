/* Solucao exer5 - banco de dados de inimigos/peersonagens
   @mauricio
*/
#include <stdio.h>

#define MAX 500

struct bancoDados{
   char nome[20];
   int id;
   int level;
   int vida;
   int ataque;
   int defesa;
};

//inserir inimigo no bancoDados
void inserirInimigo (struct bancoDados *inimigos, int tam) {
   for(int i=0; i<tam; i++) { 
      getchar();
      fgets(inimigos[i].nome, 20, stdin);
      scanf("%d", &inimigos[i].id);
      scanf("%d", &inimigos[i].level);
      scanf("%d", &inimigos[i].vida);
      scanf("%d", &inimigos[i].ataque);
      scanf("%d", &inimigos[i].defesa);
   }
}

//exibir inimigo no bancoDados
void exibirInimigo (struct bancoDados inimigos) {
   printf("Nome..........: %s", inimigos.nome);
   printf("ID............: %d\n", inimigos.id);
   printf("Level.........: %d\n", inimigos.level);
   printf("Vida..........: %d\n", inimigos.vida);
   printf("Ataque........: %d\n", inimigos.ataque);
   printf("Defesa........: %d\n", inimigos.defesa);
   printf("\n");
}

int main() {
   struct bancoDados inimigos[MAX];
   int i, x;
  
   //le qtde de personagens que constarao no banco
   scanf("%d", &x);
   inserirInimigo (inimigos, x);

   for (i=0; i<x; i++)
      exibirInimigo(inimigos[i]);
   return 0;

}