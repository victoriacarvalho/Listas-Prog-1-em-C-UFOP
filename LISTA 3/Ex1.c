#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, i;

    printf("\n Digite a quantidade de números a serem somados; \n >>>>> ");
    scanf("%d", &numero);

    for(i = 1; numero > 1; numero = numero - 1)
    {
        i = i + numero;
    }

    printf("\n Soma: %d \n ",i);

    system ("PAUSE");
}
