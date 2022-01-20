#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int minutos, horas;

    printf("\n Digite quantas horas são (Formato 24hr): \n  >>>>> ");
    scanf("%d", &horas);

    minutos = horas * 60;

    printf("\n Do inicio do dia até a hora atual se passaram %d minutos \n ", minutos);
    
    return 0;
}