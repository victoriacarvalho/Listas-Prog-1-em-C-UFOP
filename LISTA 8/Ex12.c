#include <stdio.h>
#include <locale.h>

void leArray(int *vet, int quant);
void exibeArray(int *vet, int quant);
int somaArray(int *vet, int *vet2, int quant);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quant, i;

    printf("\n Digite a quantidade de elementos dos vetores: \n >>>>> ");
    scanf("%d", &quant);

    float vetor[quant], vetor2[quant];

    leArray(vetor, quant);
    leArray(vetor2, quant);

    exibeArray(vetor, quant);
    exibeArray(vetor2, quant);

    somaArray(vetor, vetor2, quant);

    printf(" \n ");

    return 0;
}

void leArray(int *vet, int quant)
{
    int i, k = 1;
    float *pont;

    pont = (float *)(malloc(quant * sizeof(float)));

    k = 1;

       for (i = 0; i < quant; i++)
        {
            printf("\n Digite o %dº número do vetor: \n >>>>> ", k++);
            scanf("%d", &vet[i]);
        }
}

void exibeArray(int *vet, int quant)
{
    int i;

     printf(" \n Vetor digitado: ");
     printf(" [ ");

        for (i = 0; i < quant; i++)
        {
            printf(" %d  ", vet[i]);
        }
            printf(" ] ");
            printf(" \n ");
}

int somaArray(int *vet, int *vet2, int quant)
{
    int i, soma = 0, array3[quant];
    int k = 1;

        /*
        for (i = 0; i < quant; i++)
        {
            soma = *(vet + i) + *(vet2 + i);
            printf("\n \n Indice [%d]: %d ", i, soma);
        }
        soma = 0; 
        */

        for (i = 0; i < quant; i++)
        {
            array3[i] = *(vet + i) + *(vet2 + i);
            printf("\n Indice %d do array 3 sera na posicao: [%d]: ",k++, array3[i]);
        }
        soma = 0;

        printf(" \n ");
}