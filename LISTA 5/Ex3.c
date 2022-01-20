#include <stdio.h>
#include <locale.h>
#define TAMANHO 10

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor1[TAMANHO], vetor2[TAMANHO], resultado[TAMANHO], i, k = 1;

    for(i = 0; i < TAMANHO; i++)
    {
        printf("\n Digite o %d valor do primeiro vetor: \n  >>>>> ", k++);
        scanf("%d", &vetor1[i]);
    } 
    k = 1;

    for (i = 0; i < TAMANHO; i++)
    {
       printf("\n Digite o %d valor do segundo vetor: \n  >>>>> ", k++);
       scanf("%d", &vetor2[i]);
    }
    
    printf("\n Vetor resultante: [ ");
    for (i = 0; i < TAMANHO; i++)
    {
        resultado[i] = vetor1[i] * vetor2[i];
        printf(" %d ", resultado[i]);
    }
    printf(" ] ");

    return 0;
}