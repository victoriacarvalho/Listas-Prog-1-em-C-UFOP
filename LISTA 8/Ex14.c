#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float exibeVetor(float *vet, int quant);
float alocaVetorFloat(float *vet, int quantidade);

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int quant, i;

    printf("\n Digite a quantidade de elementos do vetor: \n >>>>> ");
    scanf("%d", &quant);

    float vetor[quant];

    alocaVetorFloat(vetor, quant);
    exibeVetor(vetor, quant);

     return 0;
}

float alocaVetorFloat(float *vet, int quantidade)
{
    int *pont;
    int i;

    pont = (float *)(malloc(quantidade * sizeof(float)));

    vet[quantidade];

    for (i = 0; i < quantidade; i++)
    {
        vet[quantidade] = vet[i];
    }

    int k = 1;

       for (i = 0; i < quantidade; i++)
        {
            printf("\n Digite o %dº número do vetor: \n >>>>> ", k++);
            scanf("%f", &vet[i]);
        }
}

float exibeVetor(float *vet, int quant)
{
    int i;
    vet[quant];

     printf(" \n Vetor digitado: ");
     printf(" [ ");

        for (i = 0; i < quant; i++)
        {
            printf(" %.2f  ", vet[i]);
        }
            printf(" ] ");
            printf(" \n ");
}

