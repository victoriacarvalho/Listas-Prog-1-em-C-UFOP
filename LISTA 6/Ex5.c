#include <stdio.h>
#include <string.h>

#define TAMANHO 50

void elimina_espacos(char array1[], char array2[]);

int main ()
{
    char string1[TAMANHO], string_sem_espaco[TAMANHO];

    printf("\n Digite sua string: \n >>>>> ");
    scanf("%50[^\n]", string1);

    elimina_espacos(string1, string_sem_espaco);

    return 0;
}

void elimina_espacos(char array1[], char array2[])
{
    int i, j = 0;

    for(i = 0; i < TAMANHO; i++)
    {
        if(array1[i] == '\0')break;
        if(array1[i] == ' ')continue;
        array2[j] = array1[i];
        j++;
    }

    fflush(stdin);
    printf("\n %s ", array2);
    return 0;

}