#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero1, numero2, soma, mult, div, sub;

    printf("\n Digite o número 1 \n >>>>> ");
    scanf("%f", &numero1);

    printf("\n Digite o número 2: \n >>>>> ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;
    mult = numero1 * numero2;
    div = numero1 / numero2;
    sub = numero1 - numero2;

    printf("  %.1f + %.1f = %.1f \n ", numero1, numero2, soma);
    printf(" %.1f - %.1f = %.1f \n ", numero1, numero2, sub);
    printf(" %.1f * %.1f = %.1f \n ", numero1, numero2, mult);
    printf(" %.1f / %.1f = %.1f \n ", numero1, numero2, div);

    return 0;
}