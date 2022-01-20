#include <stdio.h>
#include <locale.h>

 typedef struct
{
    char nome[51];
    int idade;
    char endereco[201];

} pessoa;

int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int i, k = 1, quantidade;

    printf("\n Digite a quantidade de pessoas que deseja armazenar os dados \n >>>>> ");
    scanf("%d", &quantidade);

    pessoa p[quantidade];

    for (i = 0; i < quantidade; i++)
    {
        fflush(stdin);
        printf("\n Digite o %d nome: \n >>>>> ", k++);
        gets(p[i].nome);

        printf("\n Digite a idade: \n >>>>> ");
        scanf("%d", &p[i].idade);

        fflush(stdin);
        printf("\n Digite o endereco: \n >>>>> ");
        gets(&p[i].endereco);
    }


        k = 1;

            for (i = 0; i < quantidade; i++)
            {
                printf("\n %d cadastro: \n NOME: %s \n IDADE: %d \n ENDEREcO: %s \n ", k++, p[i].nome, p[i].idade, p[i].endereco);

            }
            printf(" \n ");

    system ("PAUSE");
}

