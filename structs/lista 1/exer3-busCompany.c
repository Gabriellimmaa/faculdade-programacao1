/* Solucao exer3 - Bus Company
   @mauricio
*/
#include <stdio.h>

#define MAX 44

struct registro {
   int numeroPassagem;
   char data[100];
   char origem[100];
   char destino[100];
   char horario[6];
   int poltrona;
   int idade;
   char nome[100];
};

int main() {
   struct registro passageiros[MAX];
   int i = 0, soma = 0;
   float media = 0;
  
   //enqto existir passageiro faz a leitura dos dados
   while(1) {
      scanf("%d", &passageiros[i].numeroPassagem);
      if(passageiros[i].numeroPassagem == -1)//condicao de parada
         break;
      getchar();
      fgets(passageiros[i].data, 100, stdin);
      fgets(passageiros[i].origem, 100, stdin);
      fgets(passageiros[i].destino, 100, stdin);
      fgets(passageiros[i].horario, 6, stdin);
      scanf("%d", &passageiros[i].poltrona);
      getchar();
      scanf("%d", &passageiros[i].idade);
      getchar();
      fgets(passageiros[i].nome, 100, stdin);
      soma += passageiros[i].idade; 
      i++;
   }

   //calcula media das idades
   media = soma / i;

   //verifica passageiros que estao sentado nas poltronas pares e acima da media das idades
   for(int j = 0; j < i; j++) {
      if(passageiros[j].poltrona % 2 == 0) {
         if(passageiros[j].idade > media)
            printf("%s", passageiros[j].nome);
      }
   }
   return 0;
}