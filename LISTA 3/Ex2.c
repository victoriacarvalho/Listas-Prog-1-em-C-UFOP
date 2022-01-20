#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, i, maior;

    for(i = 1; i <=10; i++)
    {
        printf("\n Digite o %d número: \n >>>>> ", i);
        scanf("%d", &numero);

        if(i == 1){
           maior = numero;
    } else{
            if(numero > maior){
                maior = numero;
            }
    }
    }

    printf("\n Maior número: %d \n ", maior);

    system("PAUSE");
}

