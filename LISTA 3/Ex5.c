#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;
    float peso, soma = 0.0;
    char op;

    do {

        printf("\n Digite sua idade: \n >>>>> ");
        scanf(" %d", &idade);

        if (idade > 30) {

        printf("\n Digite seu peso: ");
        scanf(" %f", &peso);

        soma += peso;
}
    printf("\n Deseja continuar? 's' para SIM , 'n' para NÃO \n >>>>> ");
    scanf(" %c", &op);

}    while (op != 'n');

    printf("Soma dos pesos: %0.2f \n", soma);

    system("PAUSE");

}
