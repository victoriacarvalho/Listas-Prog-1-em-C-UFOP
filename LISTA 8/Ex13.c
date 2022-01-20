#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int valor, tamanho, k = 1, i;
    int *pont;

    printf("\n Digite um valor positivo para verificacao: \n >>>>> ");
    scanf("%d", &valor);

    if(valor < 0)
    {
        printf("\n VALOR INVÁLIDO \n");
        return main ();
    }

        printf("\n Digite o tamanho do vetor de deseja digitar: \n  >>>>> ");
        scanf("%d", &tamanho);

        pont = (int *)(malloc(tamanho * sizeof(int)));

        int vetor[tamanho];

            for (i = 0; i < tamanho; i++)
            {
               printf("\n Digite o %d º número do vetor \n  >>>>> ", k++);
               scanf("%d", &vetor[i]);

               while (vetor[i] < 1)
               {
                   printf("\n Valor invalido, tente novamente: \n >>>>>  ");
                   scanf("%d", &vetor[i]);
               }
            }

            printf("\n Vetor digitado: ");
            printf(" [ ");
            for (i = 0; i < tamanho; i++)
            {
               printf(" %d ", vetor[i]);
            }
            printf(" ] ");
            printf(" \n ");

    return 0;
}