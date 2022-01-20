#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int dado(void)
{
    int numeroSorteado;
    srand(time(NULL));
    numeroSorteado = (rand()%6)+1;
    printf("\n Número sorteado: %d \n ", numeroSorteado);

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    dado();

    return 0;
}