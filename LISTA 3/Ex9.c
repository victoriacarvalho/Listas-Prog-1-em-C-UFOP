#include <stdio.h>
#include <locale.h>

int fibonacci(int num) // n�o sei se � isso que deseja, fiz esse c�digo no semestre passado e reaproveitei
{
    if (num == 1) {
        return 0;
    }
     else
        if (num == 2){
        return 1;
    }
    else
        return fibonacci (num - 1) + (num - 2);
}

int main (){

    setlocale(LC_ALL, "Portuguese");

    int resultado, numero;

    printf("\n Digite o valor correspondente a quantidade de n�meros que deseja exibir \n Obs : o valor deve ser maior que 2 \n >>>>> ");
    scanf("%d", &numero);

    resultado = fibonacci(numero);

    printf("\n A sequ�ncia de n�meros correspondente ao valor digitado � : %d  \n ", resultado);

    system("PAUSE");
}
