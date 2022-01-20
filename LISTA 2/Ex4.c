#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    int numero;

    printf("\n Digite um numero INTEIRO para ser verificado: \n >>>>> ");
    scanf("%d", &numero);

    if(numero >= 0 && numero <= 10)
    {
        printf("\n O numero %d esta entre  0 e 10 \n ", numero);
    }
        if(numero >= 10 && numero <= 100)
        {
            printf("\n O numero %d esta entre  10 e 100 \n ", numero);
        }

            if(numero >= 100 && numero <= 1000)
            {
                printf("\n O numero %d esta entre  100 e 1000 \n ", numero);
            }

                if(numero >= 1000 && numero <= 10000)
                {
                    printf("\n O numero %d esta entre  1000 e 10000 \n ", numero);
                }

                if(numero > 10000)
                    {
                        printf("\n O numero %d nao esta em nenhum dos grupos \n", numero);
                    }
     return 0;         
}