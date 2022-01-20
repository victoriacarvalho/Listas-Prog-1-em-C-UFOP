#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float capital, juros, rend, total;
    int meses;

    printf("\n Digite o capital disponível: \n >>>>> ");
    scanf("%f", &capital);

    printf("\n Digite a taxa de juros (EX: 3 para 3%%): \n >>>>> ");
    scanf("%f", &juros);

    printf("\n Digite agora o tempo em MESES: \n >>>>> ");
    scanf("%d", &meses);

    juros = juros / 100;
    rend = capital * (juros * meses);
    total = capital + rend;

    printf("\n Valor do rendimento: %.2f \n Valor total: %.2f ", rend, total);

    return 0;
}