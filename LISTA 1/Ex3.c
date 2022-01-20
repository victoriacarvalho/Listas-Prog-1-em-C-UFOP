#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float despesas, juros, total;

    printf("\n Digite o valor gasto com despesas: \n >>>>> ");
    scanf("%f", &despesas);

    juros = despesas / 10;
    total = juros + despesas;

    printf("\n Valor total incluindo gorjeta: R$%.2f \n ", total);

    return 0;
}