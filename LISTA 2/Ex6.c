#include <stdio.h>
#include <locale.h>
#define pi 3.14159

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    float volume, raio, h;

    printf("\n Digite o RAIO da base da lata: \n >>>>> ");
    scanf("%f", &raio);

    printf("\n Digite a ALTURA da lata: \n >>>>> ");
    scanf("%f", &h);

    volume = (pi * raio) * (2 * h);

    printf("\n O volume da lata e : %.2f ml \n ", volume);

    return 0;
}