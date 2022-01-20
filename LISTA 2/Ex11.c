#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    int numero;

    printf("\n Digite um numero para corresponder a um mês do ano: \n >>>>> ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("\n O numero digitado corresponde a JANEIRO \n ");
        break;

    case 2:
        printf("\n O numero digitado corresponde a FEVEREIRO \n ");
        break;

    case 3:
        printf("\n O numero digitado corresponde a MARÇO \n ");
        break;

    case 4:
        printf("\n O numero digitado corresponde a ABRIL \n ");
        break;
    
    case 5:
        printf("\n O numero digitado corresponde a MAIO \n ");
        break;
    
    case 6:
        printf("\n O numero digitado corresponde a JUNHO \n ");
        break;

    case 7:
        printf("\n O numero digitado corresponde a JULHO \n ");
        break;

    case 8:
        printf("\n O numero digitado corresponde a AGOSTO \n ");
        break;

    case 9:
        printf("\n O numero digitado corresponde a SETEMBRO \n ");
        break;

    case 10:
        printf("\n O numero digitado corresponde a OUTUBRO \n ");
        break;

    case 11:
        printf("\n O numero digitado corresponde a NOVEMBRO \n ");
        break;

    case 12:
        printf("\n O numero digitado corresponde a DEZEMBRO \n ");
        break;

    default:
        printf("\n O número digitado é inválido \n ");
    }

    return 0;
}