#include <stdio.h>
#include <locale.h>
#define  QUANTIDADE 11

typedef struct Atleta
{
    char nome[51];
    int numeroCamisa;
    float altura, peso;

} Atleta;

void cadastraAtleta(Atleta atleta[], int quant);
void exibeDadosAtleta(atleta);
void exibeAtletas(Atleta atleta[], int quant);
Atleta AtletaMaisBaixo(Atleta atleta[], int quant);
Atleta AtletaMaisPesado(Atleta atleta[], int quant);

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int i, k = 1;
    float pesado = 0.0, baixo = 99.99;

    Atleta *atleta = NULL;
    atleta = (Atleta*)malloc(QUANTIDADE * sizeof(Atleta));

    cadastraAtleta(atleta, QUANTIDADE);
    exibeAtletas(atleta, QUANTIDADE);

    AtletaMaisBaixo(atleta, QUANTIDADE);
    AtletaMaisPesado(atleta, QUANTIDADE);

    free(atleta);

    system ("PAUSE");
}

void cadastraAtleta(Atleta Atleta[], int quant)
{
    int i, k = 1;

     for(i = 0; i < QUANTIDADE; i++)

    {
        fflush(stdin);
        printf("\n Digite o NOME do %dº jogador: \n >>>>> ", k);
        gets(Atleta[i].nome);

        printf("\n Digite o NÚMERO DA CAMISA do %d jogador: \n >>>>> ", k);
        scanf("%d", &Atleta[i].numeroCamisa);

        printf("\n Digite a ALTURA do %d jogador: \n >>>>> ", k);
        scanf("%f", &Atleta[i].altura);

        printf("\n Digite o PESO do %d jogador: \n >>>>> ", k++);
        scanf("%f", &Atleta[i].peso);

    }

    k = 1;
}

void exibeDadosAtleta(Atleta atleta)
{
    int quant;

    printf("\n Nome: %s \n Número da camisa: %d \n Peso: %.2f \n Altura: %.2f \n", atleta.nome, atleta.numeroCamisa, atleta.peso, atleta.altura);
}

void exibeAtletas(Atleta atleta[], int quant)
{
    int i, k = 1;

    printf(" \n ");
    printf("\n ****************************** \n ");
    printf(" Dados dos atletas cadastrados ");
    printf("\n ******************************\n ");

     for(i = 0; i < quant; i++)
     {
        printf("\n ### Dados do atleta %d ### \n", k++);
        exibeDadosAtleta(atleta[i]);
     }

     k = 1;

     printf("\n\n");

}

Atleta AtletaMaisBaixo(Atleta atleta[], int quant)
{
    int i, qtd, maisB, maisBaixo;

    maisBaixo = atleta[0].altura;
    maisB = 0;

    printf("\n Inicial do atleta mais baixo: \n ");
    for(i = 0; i < quant; i++)
    {
        if (atleta[i].altura > maisBaixo)
        {
            maisBaixo = atleta[i].altura;
            maisB = i;
            printf(" %c \n",atleta[i].nome[0]);
        }
    }

    return atleta[maisB];
}

Atleta AtletaMaisPesado(Atleta atleta[], int quant)
{
    int i, qtd, maisP, maisPesado;

    maisPesado = atleta[0].altura;
    maisP = 0;

    printf("\n Número da camisa do atleta mais pesado: \n ");
    for(i = 0; i < quant; i++)
    {
        if (atleta[i].altura > maisPesado)
        {
            maisPesado= atleta[i].altura;
            maisP = i;
            printf(" %d \n",atleta[i].numeroCamisa);
        }
    }

    return atleta[maisP];
}
