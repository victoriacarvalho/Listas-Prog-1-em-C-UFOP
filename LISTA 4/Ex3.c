#include <stdio.h>
#include <locale.h>

int somatorio(int numero)
{
    if (numero == 0)
        return 0;
    else
        return numero + somatorio(numero - 1);  
}


int main()
{
    setlocale(LC_ALL,"Portuguese");

    int num;

    printf("\n Digite um n�mero para verificar o somat�rio de seus antecessores: \n >>>>> ");
    scanf("%d",&num);

    printf("Somat�rio: %d", somatorio(num));

    return 0;
}