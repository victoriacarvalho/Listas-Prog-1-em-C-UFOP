#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    int a, b, c, d, delta, x1, x2;

    printf("\n Digite o valor de a: \n >>>>> ");
    scanf("%d", &a);

    printf("\n Digite o valor de b: \n >>>>> ");
    scanf("%d", &b);

    printf("\n Digite o valor de c: \n >>>>> ");
    scanf("%d", &c);

    delta = ((pow(b,2) ) - 4 * (a * c));

    if(delta >= 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\n O resultado e x1: %d e x2: %d \n", x1, x2);

    } else {
        printf("\n Nao possui raizes reais \n ");
    }

    return 0;
}