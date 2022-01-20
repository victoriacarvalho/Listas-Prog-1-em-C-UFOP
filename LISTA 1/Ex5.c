#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valor, valorNovo, desconto;

    printf("\n Digite valor do produto a receber desconto de 15 por cento: \n >>>>>  ");
    scanf("%f", &valor);

    desconto = valor / 15;
    valorNovo = valor - desconto;

    printf("\n Valor do produto: %.2f ----- Valor com desconto: %.2f \n ", valor, valorNovo);

    return 0; 
}