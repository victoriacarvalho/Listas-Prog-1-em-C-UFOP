#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float fah, cent;

    printf("\n Digite o valor da temperatura em graus centígrados: \n >>>>> ");
    scanf("%f", &cent);

    fah = ((9 * cent) + 160) / 5;

    printf("\n Temperatura convertida: %.2f \n ", fah);

    return 0;
}