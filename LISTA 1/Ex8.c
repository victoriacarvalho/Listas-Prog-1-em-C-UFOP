#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float fah, cent;

    printf("\n Digite a temperatura em Fahrenheit: \n >>>>> ");
    scanf("%f", &fah);

    cent = (fah - 32) / 1.8;

    printf("\n Temperatura convertida: %.2f \n ", cent);

    return 0;
}