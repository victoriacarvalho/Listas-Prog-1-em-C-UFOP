#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    int idade;
    float peso;
    char inicial;

    printf("\n Digite o caracter da inicial do seu nome: \n >>>>> ");
    scanf("%c", &inicial);

    printf("\n Digite a sua idade: \n >>>>> ");
    scanf("%d", &idade);

    printf("\n Digite seu peso em kg: \n >>>>> ");
    scanf("%f", &peso);

    if(idade >= 16 && idade <= 70)
    {
        if(peso >= 50)
        {
            printf("\n O usuário: %c - idade: %d - peso: %.2f kg PODE doar sangue \n ", inicial, idade, peso);
        }
        
    }else{
        printf("\n O usuário: %c - idade: %d anos- peso: %.2f kg NAO pode doar sangue \n ", inicial, idade, peso);
    }

    return 0;
}