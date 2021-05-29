#include <stdio.h>

#define MAX 100

#define MASCULINO "m"
#define FEMININO "f"
#define AZUL "a"
#define VERDE "v"
#define CASTANHO "c"
#define LOIRO "l"
#define PRETO "p"

struct habitante
{
    int idade ;
    char sexo ;
    char olhos ;
    char cabelos ;
};

struct resposta
{
    int maiorIdade ;
    double percentualMulheres ;
};

int lerHabitantes()
{
    struct habitante h;
    FILE *arq;
    if((arq = fopen("exer2.rec", "wb")) == NULL) {
        exit(1);
    }

    scanf("%d", &h.idade );
    fwrite(&h, sizeof(h), 1, arq);

    getchar(); // ignora o \n
    if (h.idade != -1)
    {
        scanf("%c %c %c", &h.sexo, &h.cabelos, &h.olhos);
        fwrite(&h, sizeof(h), 1, arq);
        return 1;
    }
    else
        return 0;
}

void encontrarRespostas(int n)
{
    struct habitante array;
    struct resposta r;
    FILE *arq;
    if((arq = fopen("exer2.rec", "rb")) == NULL) {
      exit(1);
    }
    FILE *arq2;
    if((arq2 = fopen("exer2r.rec", "wb")) == NULL) {
      exit(1);
    }

    int i;
    int qtdeMulheres = 0;

    r.maiorIdade = -1;
    fwrite(&r, sizeof(r), 1, arq2);

    for(i=0; i < n ; ++i)
    {
        if (array.idade > r.maiorIdade)
            r.maiorIdade = array.idade;
            fwrite(&r, sizeof(r), 1, arq2);
        if(array.sexo == FEMININO &&
                array.idade >= 18 &&
                array.idade <=35 && array.cabelos == LOIRO &&
                array.olhos == VERDE)
        {
            qtdeMulheres++;
        }
    }
    r.percentualMulheres = (qtdeMulheres/(double)n)*100;
    fwrite(&r, sizeof(r), 1, arq2);
}
int main ()
{
    int habitantesLidos = 0;
    struct resposta resp;
    struct habitante habitantes[MAX];

    while(lerHabitantes(&habitantes[habitantesLidos]))
    {
        ++habitantesLidos;
    }

    encontrarRespostas(habitantesLidos);

    FILE *arq;
    if((arq = fopen("exer2r.rec", "rb")) == NULL) {
      exit(1);
    }

    while(fread(&resp, sizeof(resp), 1, arq) == 1) {
        printf("Mais velho : %d\n", resp.maiorIdade);
        printf("Mulheres com olhos verdes , loiras com 18 a 35 anos : %.2 lf %%\n", resp.percentualMulheres);
    }
    return 0;
}
