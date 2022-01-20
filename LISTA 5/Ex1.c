#include <stdio.h>
#include <locale.h>
#define TAMANHO 20

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[TAMANHO], i, par = 0, impar = 0, k = 1;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("\n Digite o %d º número do vetor: \n >>>>> ", k++);
        scanf("%d", &vetor[i]);  

        if (vetor[i] % 2 == 0)
        par++;

        else
            impar++;
    }

    printf("\n o vetor possui %d impares e %d pares \n ", impar, par);
    return 0;
}