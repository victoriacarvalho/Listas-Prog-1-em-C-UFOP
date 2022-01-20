#include <stdio.h>
#include <locale.h>

int fibonacci(int num) // não sei se é isso que deseja, fiz esse código no semestre passado e reaproveitei
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

    printf("\n Digite o valor correspondente a quantidade de números que deseja exibir \n Obs : o valor deve ser maior que 2 \n >>>>> ");
    scanf("%d", &numero);

    resultado = fibonacci(numero);

    printf("\n A sequência de números correspondente ao valor digitado é : %d  \n ", resultado);

    system("PAUSE");
}
