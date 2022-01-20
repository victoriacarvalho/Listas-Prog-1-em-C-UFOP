#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, i;

    printf("\n Digite o número que deseja verificar sua tabuada: \n >>>>> ");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++)
    {
        printf("\n %d x %d = %d \n ", i, numero, i * numero);
    }

    system("PAUSE");
}
