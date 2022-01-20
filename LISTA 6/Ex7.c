#include <stdio.h>
#include <string.h>

#define TAMANHO 50

int inserirCaracter(char string[], char c, int posicao);

int main(){

    char letra, string[TAMANHO];
    int posicao;

    printf("\n Digite sua string: \n >>>>> ");
    scanf("%50[^\n]", string);

    fflush(stdin);
    printf("\n Digite uma letra: \n >>>>> ");
    scanf(" %c", &letra);

    printf("\n Digite uma posicao para inserir a letra escolhida: \n >>>>> ");
    scanf("%d", &posicao);

    inserirCaracter(string, letra, posicao);

    printf("\n %s \n ", string);

    return 0;
}

int inserirCaracter(char string[], char c , int posicao)
{
    char aux, aux2;
    int espelho, i;

    espelho = strlen(string);
    aux = string[posicao - 1];
    string[posicao - 1] = c;

    for(i = posicao -1 ; i <= espelho; i++)
    {
        aux2 = string[i];
        string[i] = aux;
        aux = aux2;
    }

    return 0;
}
