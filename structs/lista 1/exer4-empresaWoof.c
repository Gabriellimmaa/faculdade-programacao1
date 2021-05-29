/* Solucao exer4 - empresa Woof
   @mauricio
*/
#include <stdio.h>

#define MAX 500

struct bancoDados {
   int idade;
   char nome[50];
   char sexo;
   char estadoCivil;
   int qtdeAmigos;
   int qtdeFotos;
};

//inserir usuario no bancoDados
void inserirUsuario (struct bancoDados *usuarios, int qtd) {

   for(int i = 0; i < qtd; i++) {
      scanf("%d", &usuarios[i].idade);
      getchar();
      fgets(usuarios[i].nome, 50, stdin);
      scanf("%c",&usuarios[i].sexo);
      getchar();
      scanf("%c",&usuarios[i].estadoCivil);
      scanf("%d",&usuarios[i].qtdeAmigos);
      scanf("%d",&usuarios[i].qtdeFotos);
  }
}

//exibir usuario do bancoDados
void exibirUsuario (struct bancoDados usuarios) {
   printf("Idade...............: %d\n", usuarios.idade);
   printf("Nome................: %s", usuarios.nome); 
   printf("Sexo................: %c\n", usuarios.sexo);
   printf("Estado Civil........: %c\n", usuarios.estadoCivil);
   printf("Numero amigos.......: %d\n", usuarios.qtdeAmigos);
   printf("Numero fotos........: %d\n", usuarios.qtdeFotos);
   printf("\n");
}

int main() {
   struct bancoDados usuarios[MAX];
   int qtdeUsuarios,i;
   //le qtde de usuarios a sererem inseridos no BD
   scanf("%d",&qtdeUsuarios);
   inserirUsuario(usuarios, qtdeUsuarios); 
  
   for(i=0; i < qtdeUsuarios; i++)
      exibirUsuario(usuarios[i]);
  return 0;
}