#include <stdio.h>
#include <locale.h>

int contaimpar (int n1, int n2)
{
    int varx, i, impares = 0;

    if(n2 < n1)
    {
        varx = n1;
        n1 = n2;
        n2 = varx;
    }

    for (i = n1; i <= n2; i++)
    {
        if (i % 2 == 1)
            impares++;
    }

return impares;
}

int main(){

    setlocale(LC_ALL, "Portuguese");
    int valor1, valor2;

    printf("\n Digite o primeiro número a ser verificado :) \n >>>>> ");
    scanf("%d", &valor1);
    printf("\n Digite o segundo número a ser verificado :) \n >>>>> ");
    scanf("%d", &valor2);
    contaimpar(valor1, valor2);

    printf("\n O intervalo (%d,%d) recebe %d números \n ", valor1, valor2, contaimpar(valor1, valor2));


    return 0;
}