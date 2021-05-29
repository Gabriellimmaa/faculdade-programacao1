#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

 typedef struct lista{
     char nome[40];
     char endereco[40];
     unsigned long int codigo;
     struct lista* prox;
   }Lista;

   Lista* inserir_restaurantes(Lista* primeiro);
   void listar_restaurantes(Lista* primeiro);
   Lista* excluir_restaurantes(Lista* primeiro);
   void alterar_restaurantes(Lista* primeiro);

main()
{
setlocale(LC_ALL,"");
   Lista *primeiro= NULL;
   char opcao;
     int segundo = 30;
      while(opcao!='s')
   {

      printf("\nCadastro Restaurante");


        printf("\n    1- Novo cadastro");
        printf("\n    2- Listar");
        printf("\n    3- Excluir cadastro");
        printf("\n    4- Alterar cadastro");
        printf("\n    5- Sair\n");
        printf("\nDigite uma opcao: ");
        fflush(stdin);
        opcao= getch();


        switch(opcao)
        {
         case '1':
              fflush(stdin);
              system("cls");
              printf("\nNovo Cadastro\n");
              primeiro= inserir_restaurantes(primeiro);
         getch();
         system("cls");
         break;

         case '2':
               system ("cls");
              printf("\nRestaurante Cadastros\n");
              listar_restaurantes(primeiro);
         getch();
         system("cls");
         break;

         case '3':
                     system ("cls");
              printf("\nExcluir Cadastros\n");
              primeiro= excluir_restaurantes(primeiro);
         getch();
         system("cls");
         break;

         case '4':
              system ("cls");
              printf("\nAlterar Cadastro\n");
              alterar_restaurantes(primeiro);
         getch();
         system("cls");
         break;

         case '5':
                  opcao='s';
         break;

         default:
            system("cls");
         break;
      }
   }
}

Lista* inserir_restaurantes (Lista *primeiro){
     Lista restaurante;
     Lista *atual= primeiro;
     char identificador= 'F';

     printf("  Nome: ");
     fflush (stdin); fgets(restaurante.nome, 40, stdin);
     printf("  Endereco: ",135);
     fflush (stdin); fgets(restaurante.endereco, 40, stdin);
     printf("  Codigo: ",162);
     scanf("%u",&restaurante.codigo);printf ("\n");

     for(atual=primeiro; atual!=NULL; atual=atual->prox){
        if(atual->codigo==restaurante.codigo){
            identificador= 'V';
            break;
        }
     }

     if(identificador!='V' && (strlen(restaurante.nome)!=1 && strlen(restaurante.endereco)!=1)){
         Lista* NovoRestaurante=(Lista*) malloc (sizeof(Lista));
         strcpy(NovoRestaurante->nome, restaurante.nome);
         strcpy(NovoRestaurante->endereco, restaurante.endereco);
         NovoRestaurante->codigo= restaurante.codigo;
         NovoRestaurante->prox= primeiro;
         printf("  Cadastro realizado com sucesso.");
         printf("\n\nPressione para voltar ao menu.");
         return NovoRestaurante;
     }else{
         printf("  Cadastro invalido.",160);
         printf("\n\nPressione para voltar ao menu.");
         return primeiro;
     }
}

void listar_restaurantes (Lista* primeiro){
     Lista* atual;

     for(atual= primeiro ; atual!= NULL; atual= atual->prox){
        printf("\n  Nome: ");
        printf("%s", atual->nome);
        printf("  Endereco: ",135);
        printf("%s", atual->endereco);
        printf("  Codigo: ",162 );
        printf("%u", atual->codigo);
        printf("\n\n");
     }
     if(primeiro==NULL)
        printf("  Nenhum restaurante cadastrado.");
     printf("\n\nPressione para voltar ao menu.");
}

Lista* excluir_restaurantes(Lista *primeiro){

     Lista *anterior= NULL;
     Lista *atual= primeiro;
     unsigned long int codigo=0;

     printf("  Codigo do restaurante a ser excluido: ", 162,161);
     fflush(stdin);
     scanf("%u",&codigo);

      while(atual!= NULL && atual->codigo!=codigo){
        anterior= atual;
        atual= atual->prox;
     }

     if(atual==NULL){
        printf("\n  Restaurante nao encontrado.", 198);
        printf("\n\nPressione para voltar ao menu.");
        return primeiro;
     }

     if(anterior==NULL){
        printf("\n  Conteudo excluido com sucesso.", 163,161);
        primeiro= atual->prox;
     }else{
        printf("\n  Conteudo excluido com sucesso.", 163,161);
        anterior->prox= atual->prox;
     }

     free(atual);
     printf("\n\nPressione para voltar ao menu.");
     return primeiro;
}

void alterar_restaurantes(Lista* primeiro){
     char nome_substituto[40], endereco_substituto[40];
     unsigned long int codigo;
     Lista* atual=primeiro;

      printf("  Codigo do restaurante a ser alterado: ", 162);
     fflush(stdin);
     scanf("%u",&codigo);

     while(atual!= NULL && atual->codigo!=codigo){
        atual= atual->prox;
     }

      if(atual!=NULL){
        printf("\n  Novo nome: ");
        fflush (stdin); fgets(nome_substituto, 40, stdin);
        strcpy(atual->nome,nome_substituto);
        printf("  Novo endereco: ",135);
        fflush (stdin); fgets(endereco_substituto, 40, stdin);
        strcpy(atual->endereco,endereco_substituto);
        printf("  Dados alterados com sucesso.");
     }else{
        printf("\n  Restaurante n%co encontrado.",198);
     }
     printf("\n\nPressione para voltar ao menu.");
}
