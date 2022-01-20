#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt-BR");

   int horas, minutos, horasDia;

    printf("\n Digite quantas horas (considere 24 horas): \n >>>>> ");
    scanf("%d", &horas);

    printf("\n Digite agora quantos minutos são: \n >>>>> ");
    scanf("%d", &minutos);

   horasDia = (horas * 60) + minutos;

    printf("\n Do inicio do dia até agora se passaram %d minutos \n ", horasDia);

    return 0;
}