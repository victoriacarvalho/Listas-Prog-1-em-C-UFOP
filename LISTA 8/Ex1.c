#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *var1, *var2;
    int variavel1 = 7, variavel2 = 12;

    var1 = &variavel1;
    var2 = &variavel2;

    if(*var1 > *var2)
    {
        printf("\n Maior endereco: %p correspondente a variavel %d \n", var1, variavel1);
    }else{
        printf("\n Maior endereco: %p correspondente a variavel %d \n", var2, variavel2);
    }

    return 0;
}