#include <stdio.h>
#include <locale.h>
#define TAMANHO 20

int main ()
{
    setlocale(LC_ALL, "Portuguese");

        int i, j, vetor[TAMANHO], soma = 0, media = 0, cont;
        
      for (i = 0; i < TAMANHO; i++)
      {
        printf("\n Digite o valor inteiro a ser armazenado no vetor: \n \n >>>>> ");
        scanf("%d", &vetor[i]);

        soma += vetor[i];

            while(vetor[i] < 0)
            {
                if(vetor[i] < 0)
                {
                    j++;
                    printf("\n Valor Invalido. \n Digite um numero valido: \n >>>>> \n ");
                    scanf("%d", &vetor[i]);
                }
            }
          }

      media = soma / TAMANHO;
      cont++;

      printf("\n Media: %d ", media);

       printf("\n Valores abaixo da media: ");

              for(i = 0; i < TAMANHO; i++)
              {
                  if(vetor[i] < media)
                    printf("%d \n ", vetor[i]);
              }

    return 0;
}