#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");
    int num, sucessor, antecessor;

    printf("\n Digite um número: \n >>>>> ");
    scanf("%d", &num);

    sucessor = num + 1;
    antecessor = num - 1;

    printf("\n Número digitado: %d \n Sucessor: %d \n Antecessor: %d\n", num, sucessor, antecessor);

    return 0;
}