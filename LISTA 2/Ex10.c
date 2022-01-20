#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    int valor1, valor2, media, produto, divisao;

    printf("\n Digite o primeiro número: (1 a 10) \n >>>>> ");
    scanf("%d", &valor1);

    printf("\n Digite o segundo número: (1 a 10) \n >>>>> ");
    scanf("%d", &valor2);

    if(valor1 + valor2 < 8)
    {
        media = valor1 + valor2 / 2;
        printf("\n A media dos números digitados é: %d ", media);
    }
        if(valor1 + valor2 == 8)
        {
            produto = valor1 * valor2;
            printf("\n O produto de: %d x %d = %d ", valor1, valor2, produto);
        }
            if(valor1 + valor2 > 8)
            {
                if(valor1 > valor2)
                {
                    divisao = valor1 / valor2;
                }else{
                    divisao = valor1 / valor2;
                }
                printf("\n A divisao do maior numero pelo menor é igual a: %.2f \n ", divisao);
            }

    return 0;
}
