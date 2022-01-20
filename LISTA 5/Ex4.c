#include <stdio.h>
#include <locale.h>
#define TAMANHO 20

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[TAMANHO], i, k = 1, maior, menor;
    int indiceMaior = 0, indiceMenor = 0;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("\n Digite o %d elemento do vetor: \n >>>>> ", k++);
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    for (i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] < menor )
        {
             menor = vetor[i];
             indiceMenor = i;
         }
    }
    
    maior = vetor[0];
    for(i = 0; i < TAMANHO; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            indiceMaior = i;
        }
    }

    printf("\n Maior valor: %d \n Indice: %d \n ", maior, indiceMaior);
    printf("\n Menor valor: %d \n Indice: %d \n ", menor, indiceMenor);

    return 0;
}