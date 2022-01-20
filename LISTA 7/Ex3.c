#include <stdio.h>

int main ()
{
    int dado1, dado2, dado3;

    printf("\n Possiveis resultados para o lancamento: \n ");

    for(dado1 = 1; dado1 <= 6; dado1++)
    {
        for(dado2 = 1; dado2 <= dado1; dado2++)
        {
            for(dado3 = 1; dado3 <= dado2; dado3++)
                if(dado1 != dado2 && dado1 != dado3 && dado2 != dado3)
                printf("\n [%d, %d, %d]  ", dado1, dado2, dado3);
        }
    }
    return 0;
}