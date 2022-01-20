#include<stdio.h>
#include<string.h>

#define TAMANHO 50

char insereP(char frase[]);

int main(){

    char frase[TAMANHO];

    printf("\n Digite uma frase: \n >>>>> ");
    scanf("%50[^\n]", frase);

    insereP(frase);

    printf("\n  %s \n ", frase);

    return 0;

    }

char insereP(char frase[])
{
    for(int i = 0; i < strlen(frase); ++i)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'
        || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') 
        {
             frase[i] = 'P';
        }

   }

    return 0;
}