#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define limite 1000000

int dado(void)
{
    int numeroSorteado, i, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0;
     float percent1, percent2, percent3, percent4, percent5, percent6;

    srand(time(NULL));

    for (i = 0; i < 1000000; i++)
    {
        numeroSorteado = (rand()%6)+1;
    
    if(numeroSorteado == 1)
    {
        num1++;
        percent1 = (num1 / 100);
    }else
        if(numeroSorteado == 2)
        {
            num2++;
            percent2 = num2 / 100;
        }else
             if(numeroSorteado == 3)
            {
                num3++;
                percent3 = num3 / 100;
            }else
                 if(numeroSorteado == 4)
                {
                    num4++;
                    percent4 = num4 / 100;
                }else
                    if(numeroSorteado == 5)
                    {
                         num5++;
                         percent5 = num5 / 100;
                    }else
                        if(numeroSorteado == 6)
                        {
                            num6++;
                            percent6 = num6 / 100;
                        }
    }
    
    printf("\n Dado lançado 1 milhão de vezes. Porcentagem de cada face tirada: \n " );
    printf("FACE 1: %.2f %% \n FACE 2: %.2f %% \n FACE 3: %.2f %% \n FACE 4: %.2f %% \n FACE 5: %.2f %% \n FACE 6: %.2f %% \n ", (percent1 / 100),(percent2 / 100), (percent3 / 100), (percent4 / 100), (percent5 / 100), (percent6 / 100));

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    dado();

    return 0;
}