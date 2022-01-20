#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A, B;

    printf("\n Digite o Valor de A: \n >>>>> ");
    scanf("%d", &A);

    printf("\n Digite o valor de B: \n >>>>> ");
    scanf("%d", &B);

    printf("\n Valores iniciais: \n A: %d      B: %d \n Valores trocados: \n A: %d      B: %d \n ", A, B, B, A);
    
    return 0;
}
