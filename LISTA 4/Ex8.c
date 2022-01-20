#include <stdio.h>
#include <locale.h>

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }else
        if(n == 2)
        {
            return 1;
        }
         else
             return fibonacci (n - 1) + (n - 2);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int resultado, n;

    printf("\n Digite quantos números da sequência deseja exibir: \n >>>>> ");
    scanf("%d", &n);

    resultado = fibonacci(n);

    printf("\n Sequêcia de fibonacci: %d \n ", resultado);

    return 0;
}