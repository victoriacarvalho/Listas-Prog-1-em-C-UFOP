#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    int codigo;

    printf("\n Digite um código de funcionário : \n >>>>> ");
    scanf("%d", &codigo);

    switch (codigo)
    {

        case 101 :
        printf("\n Vendedor \n ");
        break;

        case 102 :
        printf("\n Atendente \n ");
        break;

        case 103 :
        printf("\n Auxiliar Técnico \n ");
        break;

        case 104 :
        printf("\n Assistente \n ");
        break;

        case 105 :
        printf("\n Coordenador de Grupo \n ");
        break;

        case 106 :
        printf("n\ Gerente \n ");
        break;

        default:
        printf("\n Código inválido \n ");

    }

    return 0;
}