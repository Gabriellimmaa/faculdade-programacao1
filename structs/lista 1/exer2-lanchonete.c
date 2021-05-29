/* Solucao exer2-Lanchonete ambrosina
   @mauricio 
*/
#include <stdio.h>

typedef struct lanchonete { //comando typedef permite "nomear" um tipo
   int codigo;
   char nome[100];
   float preco;
} ambrosina;
    
int main() {
   int i, codigo, qtdeItens, n;
   float valorPagar;

   //le a qtde de produtos a cadastrar
   printf("Quantidade de produtos a cadastrar: ");
   scanf("%d", &n);
   ambrosina produtos[n]; //define array de struct de tam n
  
   //em seguida, faz a leitura de n produtos
   for(i = 0 ; i < n ; i++) {
      scanf("%d", &produtos[i].codigo);
      getchar();
      fgets(produtos[i].nome, 100 , stdin);
      scanf("%f", &produtos[i].preco);
      getchar(); //ignorar /n
   }
   codigo = -1;
   valorPagar = 0.0;

   //le os pedidos do produto
   while(codigo != 0) {
      printf("Codigo do produto: ");
      scanf("%d", &codigo);
      if(codigo == 0) //pedido se encerra
         break;
      
      //le a qtde de itens do produto
      printf("Quantidade de itens: ");
      scanf("%d", &qtdeItens);
      
      if(qtdeItens > 0) {
         for(i=0 ; i < n ; i++) { //calcula valor total a pagar
            if(codigo == produtos[i].codigo)
               valorPagar += (produtos[i].preco * qtdeItens);
            }
         }
      }
      printf("Valor a pagar: %.2f\n", valorPagar);
      return 0;
}