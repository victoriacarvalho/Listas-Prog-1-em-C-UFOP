#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PT-BR");

    float nota;

    printf("\n Digite o valor correspondente a sua nota ( 1 a 10) : \n >>>>> ");
    scanf("%f", &nota);

    if (nota > 10 ){
            printf("\n Número Inválido \n ");
        }

    else
        if (nota < 5){
        printf("\n Conceito D \n ");
    }
        else
            if (nota >= 5 && nota <= 6.9){
                printf("\n Conceito C \n ");
            }
        else
        if (nota = 7 && nota <= 8.9){
            printf("\n Conceito B \n ");
          }
        
        else
            if (nota = 9 && nota <= 10){
            printf("\n Conceito A \n ");
        }

    return 0;
}
