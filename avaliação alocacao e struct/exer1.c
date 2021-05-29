#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

struct bancoDados {
    int numero;
    int codigo;
    int vencimento;
    int pagamento;
    float valor;
    float juros;
};

void insereContas(struct bancoDados *banco, int tam) {
    int dia_juros;
	for (int i=0; i<tam; i++) {
        float juros = 0;
        printf("Numero de conta: ");
        scanf("%d", &banco[i].numero);
        printf("Codigo do cliente: ");
        scanf("%d", &banco[i].codigo);
        printf("Data de vencimento: ");
        scanf("%d", &banco[i].vencimento);
        printf("Data de pagamento: ");
        scanf("%d", &banco[i].pagamento);
        printf("Valor da conta: ");
		scanf("%f", &banco[i].valor);
		if (banco[i].pagamento > banco[i].vencimento){
            printf("Juros(dia): ");
            scanf("%d", &dia_juros);
            banco[i].juros = ((banco[i].valor * 0.4 * dia_juros) / 100);
		}else{
		    banco[i].juros = 0;
		}
        juros = ((banco[i].valor * 0.4 * dia_juros / 100) + banco[i].valor);
        banco[i].valor = juros;
		printf("\n");
		setbuf(stdin, 0);
	}
}

void exibeContas (struct bancoDados banco[], int tam){
    float valor_total = 0;
    printf("Exibir todas as contas cadastradas\n\n");
    for(int i=0;i<tam;i++)
    {
        printf("Numero............%d\n", banco[i].numero);
        printf("Codigo............%d\n", banco[i].codigo);
        printf("Vencimento........%d\n", banco[i].vencimento);
        printf("Pagamento.........%d\n", banco[i].pagamento);
        printf("Valor.............%.2f\n", banco[i].valor);
        printf("Juros.............%.2f\n\n", banco[i].juros);
        valor_total = valor_total + banco[i].valor;
    }
    printf("Valor a receber: %.2f", valor_total);
}

void buscaConta (struct bancoDados banco[], int tam){
    int escolha;
    printf("Digite o numero da conta que queira buscar: ");
    scanf("%d", &escolha);
    printf("\n");
    for(int i=0;i<tam;i++)
    {
        if(banco[i].numero == escolha){
            printf("Numero............%d\n", banco[i].numero);
            printf("Codigo............%d\n", banco[i].codigo);
            printf("Vencimento........%d\n", banco[i].vencimento);
            printf("Pagamento.........%d\n", banco[i].pagamento);
            printf("Valor.............%.2f\n", banco[i].valor);
            printf("Juros.............%.2f\n\n", banco[i].juros);
        }
    }
}

void bomPagador (struct bancoDados banco[], int tam){
    int escolha;
    printf("Digite o numero da conta para verificar se e um bom pagador: ");
    scanf("%d", &escolha);
    printf("\n");
    for(int i=0;i<tam;i++)
    {
        if (banco[i].numero == escolha){
            if (banco[i].pagamento < banco[i].vencimento){
                printf("Bom pagador!");
                return 1;
            }else{
                printf("Mal pagador!");
                return 0;
            }
        }
    }
}

void exibeStatusCliente (struct bancoDados banco[], int tam){
    for(int i=0;i<tam;i++)
    {
        printf("Codigo............%d\n", banco[i].codigo);
        if (banco[i].pagamento < banco[i].vencimento){
            printf("Bom pagador.......SIM\n\n");
        }else{
             printf("Bom pagador.......NAO\n\n");
        }
    }
}

int main() {
    int n, op;
    struct bancoDados banco[MAX];

    printf("Insira um numero de contas para cadastrar: ");
    scanf("%d", &n);

    system("cls");

    insereContas(banco, n);

    system("cls");

    do {
        printf("\n\n----------- MENU -------------\n");
        printf("1- Exibir contas\n");
        printf("2- Buscar conta\n");
        printf("3- Verificar bom pagador\n");
        printf("4- Exibir status de clientes\n");
        scanf("%d", &op);
        setbuf(stdin, 0);
        switch (op) {
            case 1:
                //exibe todas as contas com o valor total de pagamento
                system("cls");
                exibeContas(banco, n);
            break;
            case 2:
                // aqui ele busca pelo numero da conta pois vc colocou la no classroom codigo da conta entao deduzi q era isso
                system("cls");
                buscaConta(banco, n);
            break;
            case 3:
                // busca pelo numero da conta tb
                system("cls");
                bomPagador(banco, n);
            break;
            case 4:
                // exibe o codigo do cliente agora
                system("cls");
                exibeStatusCliente(banco, n);
            break;
        }
	} while (op != 0);


   return 0;
}

