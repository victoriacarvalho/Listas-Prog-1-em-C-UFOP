#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salarioMinimo, salario, salarioTotal;

    printf("\n Digite o valor do salário mínimo: \n >>>>> ");
    scanf("%f", &salarioMinimo);

    printf("\n Digite agora o valor do SEU salário: \n >>>>> ");
    scanf("%f", &salario);

    salarioTotal = salario / salarioMinimo;

    printf("\n O salario digitado corresponde a %.2f do salario minimo \n ", salarioTotal);

    return 0;
}