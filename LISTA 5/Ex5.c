#include <stdio.h>
#include <locale.h>
#define TAMANHO 3

int main ()
{   
    setlocale(LC_ALL, "Portuguese");
    int i, k = 1, vetor[TAMANHO], novoVetor[TAMANHO], aux;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("\n Digite o %d numero do vetor: \n >>>>> ",k++);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < TAMANHO; i++)
    {
        aux = vetor[i];
        novoVetor[i] = vetor[TAMANHO - i - 1];
    }
    
    printf("\n Vetor original: \n ");

    for(i = 0; i < TAMANHO; i++)
                printf(" %d ", vetor[i]);

        printf("\n Novo vetor: \n ");

                for(i = 0; i < TAMANHO; i++)
                printf(" %d ", novoVetor[i]);

    printf(" \n ");

    return 0;
}