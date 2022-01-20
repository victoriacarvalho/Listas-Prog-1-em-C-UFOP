#include<stdio.h>
#include<string.h>

#define TAMANHO 50

int conta_vogais(char palavra[]);

int main(){

    char frase[TAMANHO];

    printf("\n Digite uma frase: \n >>>>> ");
    scanf("%50[^\n]", frase);

    printf("\n  O numero de vogais na frase %s eh: %d \n ", frase, conta_vogais(frase));

    return 0;

    }

int conta_vogais(char palavra[])
{
    char vogais[] = "aeiouAEIOU";
    int i = 0, numeroVogais = 0, j;

    for (i = 0; palavra[i] != '\0'; i++) 
    {
        for (j = 0; vogais[j] != '\0'; j++)
         {
            if (vogais[j] == palavra[i])
             {
                numeroVogais++;
            }
        }
    }

    return numeroVogais;
}