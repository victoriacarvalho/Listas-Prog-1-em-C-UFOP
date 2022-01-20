#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    int x, y;

        printf("\n Digite X: \n >>>>> ");
        scanf("%d", &x);

        printf("\n Digite Y: \n >>>>> ");
        scanf("%d", &y);


        if(x != 0 && y != 0){

            if(x > 0 && y > 0)
                printf("\n Primeiro quadrante\n");

            else
                if(x < 0 && y > 0)
                printf("\n Segundo quadrante\n");

                else
                    if(x < 0 && y < 0)
                    printf("\n Terceiro quadrante\n");
            else
                printf("\n Quarto quadrante\n");
        }

    return 0;
}