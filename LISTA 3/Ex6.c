#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int quantidade, i, op, soma, positivos, negativos;
    int vetor[quantidade];
    float media, percentual;

    printf("\n Digite a quantidade de valores a serem recebidos: \n >>>>> ");
    scanf("%d", quantidade);

    while (quantidade > 0)
    {
            if(quantidade > 0)
            {
                for(i = 0; i < quantidade; i++)
                {
                    printf("\n Digite o %d valor: \n >>>>> ", i++);
                    scanf("%d", &vetor[i]);

                    soma = soma + vetor[i];

                    if(vetor[i] >= 0)
                    {
                     positivos++;

                    }else{
                        negativos++;
                    }
                }

                media = soma / quantidade;

                printf("\n Média: %0.2f ", media);
                printf("\n Positivos: %d ", positivos);
                printf("\n Negativos: %d ", negativos);

                percentual = (positivos / quantidade)*100;

                printf("\n Percentual positivos: %0.2f", percentual);
                printf("\n Percentual negativos: %0.2f ", 100 - percentual);

        } else{
            op = 1;
        }
    }

    system ("PAUSE");
}
