#include <stdio.h>
#include <string.h>

#define TAMANHO 50

char funcaoCopia(char string[], char copia[]);

int main()
{
    char string1[TAMANHO], copia1[TAMANHO];
    
    printf("\n Digite sua string: \n >>>>> ");
    scanf("%50[^\n]", string1);

    funcaoCopia(string1, copia1);

    printf("\n String copiada: %s \n ", copia1);

    return 0;
}

char funcaoCopia(char string[], char copia[])
{
    int i, espelho;

    espelho = strlen(string);

    for(i = 0; i < TAMANHO; i++)
    {
        copia[i] = string[i];
        
    }

}

