#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int fatorial, n;

    printf("\n Digite o valor que deseja calcular o seu fatorial: \n >>>>>  ");
    scanf("%d", &n);

    for(fatorial = 1; n > 1; n = n - 1)
    fatorial = fatorial * n;

    printf("\n Fatorial: %d \n ", fatorial);

    system("PAUSE");
}
