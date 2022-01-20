#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    float lado1, lado2, lado3;

    printf("\n Digite o valor do lado 1: \n >>>>> ");
    scanf("%f", &lado1);

    printf("\n Digite o valor do lado 2: \n >>>>> ");
    scanf("%f", &lado2);

    printf("\n Digite o valor do lado 3: \n >>>>> ");
    scanf("%f", &lado3);

    if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
    {
        printf("\n O triangulo e ESCALENO \n ");
    }
        if((lado1 == lado2 && lado1 != lado3) || (lado2 == lado3 && lado2 != lado1))
        {
            printf("\n O triangulo e ISOSCELES \n ");
        }
   
            if(lado1 == lado2 && lado1 == lado3)
            { 
                printf("\n O triângulo e EQUILÁTERO \n ");
            }

    return 0;
}