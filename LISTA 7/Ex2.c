#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 6

int main ()
{
    int dado1, dado2, dado3, i;

    printf("\n Possiveis jogadas para tres dados: \n Lancando os dados \n ");
    for(dado1 = 1; dado1 <= 6; dado1++)
    {
        for(dado2 = 1; dado2 <= dado1; dado2++)
        {
            for(dado3 = 1; dado3 <= dado2; dado3++)
                printf(" [%d, %d, %d] \n ", dado1, dado2, dado3);
        }
    }


    return 0;
}

/* opcao com rand

for(i = 0; i < 215; i++)
    {
        dado1 = rand()% 6 + 1;
        dado2 = rand()% 6 + 1;
        dado3 = rand()% 6 + 1;

        printf("\n  Face gerada para o dado 1: %d \n ",dado1);
        printf(" Face gerada para o dado 2: %d \n ",dado2);
        printf(" Face gerada para o dado 3: %d \n ",dado3);
        printf("_____________________________"); */