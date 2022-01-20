#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 50

int main()
{
    int valor = 0;
    char palavra[TAMANHO], palindromo[TAMANHO];

    printf("\n Digite uma palavra: USE SOMENTE LETRAS MINUSCULAS\n >>>>>  ");
    scanf("%s", palavra);

    strcpy(palindromo, palavra);
    strrev(palindromo);

    valor = strcmp(palavra, palindromo);

    if(valor == 0)
    {
        printf("\n A palavra %s EH UM PALINDROMO \n", palavra);

    }else{
        printf("\n A palavra %s NAO EH UM PALINDROMO \n", palavra);
    }

    return 0;
}