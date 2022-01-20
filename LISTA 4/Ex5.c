#include <stdio.h>
#include <locale.h>

void estacao(int dia, int mes)
{
    while(dia <= 21 && mes >= 3 && mes <= 6)
        {
            printf("\n %d/%d � Outono :) \n ", dia, mes);
            break;
        }

        while(dia <= 23 && mes >= 7 && mes <= 9)
        {
            printf("\n %d/%d � Inverno :) \n ", dia, mes);
            break;
        }

        while(dia <= 23 && mes >= 9 && mes <= 12)
        {
            printf("\n %d/%d � Primavera :) \n ", dia, mes);
            break;
        }

        while(dia <= 21 && mes >= 12 && mes <= 3)
        {
            printf("\n %d/%d � Ver�o :) \n ", dia, mes);
            break;
        }

        return estacao;
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, resultadoEstacao;

    printf("\n Digite o dia a ser verificado: \n >>>>> ");
    scanf("%d", &dia);

    printf("\n Digite o n�mero correspondete ao m�s a ser verificado \n ");
    printf("Exemplo: Dezembro = 12 \n >>>>> ");
    scanf("%d", &mes);

    estacao(dia, mes);

    return 0;
}