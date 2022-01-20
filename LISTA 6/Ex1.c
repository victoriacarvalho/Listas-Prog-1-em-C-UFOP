#include <stdio.h>
#include <string.h>

#define TAMANHO 50

int strichr(char str[], char c);

int main()
{
    char string[TAMANHO], letra;

    printf("\n Digite sua string: \n >>>>> ");
    scanf("%s", string);

    printf("\n Qual caractere deseja buscar? \n >>>>> ");
    scanf(" %c", &letra);

    strichr(string,letra);
    
    return 0;
}

int strichr(char str[], char c)
{
    int indice, i;

    indice = str[0];
    for(i = 0; i < str[i]; i++)
    {
        if(str[i] == c)
        {
            indice = i;
            printf("\n O caractere digitado %c aparece pela primeira vez no indice %d \n ", c, indice);
            return 0;
        }
    }

    !(str[i] = c);
    indice = -1;
    printf("\n %d \n", indice);
    return 0;
       
}