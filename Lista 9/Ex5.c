#include <stdio.h>
#include <locale.h>

 typedef struct dadosAtleta
{
    char nome[61];
    char esporte[51];
    int idade;
    float altura;

} dadosAtleta;

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int i, k = 1, quantidade;
    int maisVelho;
    float maisAlto;

    printf("\n Digite a quantidade de atletas que deseja verificar: \n >>>>> ");
    scanf("%d", &quantidade);

    malloc(quantidade * sizeof(int));

    dadosAtleta dados[quantidade];

    for(i = 0; i < quantidade; i++)
    {
        fflush(stdin);
        printf("\n Digite o NOME do %dº atleta \n >>>>> ", k);
        gets(dados[i].nome);

        fflush(stdin);
        printf("\n Digite o ESPORTE do %dº atleta \n >>>>> ", k);
        gets(dados[i].esporte);

        printf("\n Digite a IDADE do %dº atleta \n >>>>> ", k);
        scanf("%d", &dados[i].idade);

        printf("\n Digite a ALTURA do %dº atleta \n >>>>> ", k++);
        scanf("%f", &dados[i].altura);

    }

    k = 1;

    for (i = 0; i < quantidade; i++)
        {
             maisAlto += dados[i].altura / quantidade;
             maisVelho += dados[i].idade / quantidade;
        }

        for (i = 0; i < quantidade; i++)
        {
            printf("\n %dº cadastro: \n NOME: %s  \n ESPORTE: %s \n IDADE: %d \n ALTURA: %.2f \n ", k++, dados[i].nome, dados[i].esporte, dados[i].idade, dados[i].altura);
        }

                for (i = 0; i < quantidade; i++)
                {
                    if (dados[i].altura > maisAlto)
                    {
                        printf("\n %s é o (a) mais alto (a) ", dados[i].nome);
                    }
                        if (dados[i].idade > maisVelho)
                        {
                            printf("\n %s é o (a) mais velho (a) ", dados[i].nome);
                        }
                }

            printf(" \n ");

    k = 1;

    /* printf("\n AQUI \n"); teste */

    system ("PAUSE");
}

