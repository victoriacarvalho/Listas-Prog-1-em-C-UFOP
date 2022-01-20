#include <stdio.h>
#include <locale.h>
#define TAMANHO 10

void alteraVetor(int vet[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAMANHO], novoVetor[TAMANHO], i, j = 1;

        for(i = 0; i < TAMANHO; i++)
        {
            printf("\n Digite o %dº  valor a ser inserido no vetor: \n >>>>> ", j++);
            scanf("%d", &vetor[i]);
        }

        printf("\n \n");
        printf(" Vetor antigo: \n");

            for(i = 0; i < TAMANHO; i++)
            {
                printf(" %d ", vetor[i]);
            }

            printf(" \n \n ");
            printf("\n Novo vetor: \n");

            alteraVetor(vetor);
                 for(i = 0; i < TAMANHO; i++)
                {
                    printf(" %d ", vetor[i]);
                }

                printf(" \n \n ");

    return 0;
}

void alteraVetor(int vet[TAMANHO])
{
   vet[0] = 2;
   vet[1] = 0;
   vet[2] = 8;
   vet[3] = 1;
   vet[4] = 6;
   vet[5] = 7;
   
}
