#include <stdio.h>
#include <locale.h>

int somaintervalo(int n1, int n2)
{
    int i, menor, maior, n = 0;
    
    if (n1 < n2)
    {   
        menor = n1;
        maior = n2;
    }else{
        menor = n2;
        maior = n1;
    }
       for(i = menor; i <= maior; i++)
       {
           n += i;
       }

    return n;
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n;

    printf("\n Digite o primeiro número a ser verificado :) \n >>>>> ");
    scanf("%d", &n1);
    printf("\n Digite o segundo número a ser verificado :) \n >>>>> ");
    scanf("%d", &n2);

    n = somaintervalo(n1, n2);

    printf("\n A soma resulta em %d \n ", n);

    return 0;

}