#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 0, fora = 0, n, dentro = 0;

    do
    {
        printf("\n Digite um valor inteiro: \n >>>>> ");
        scanf(" %d",&n);

        if(n >= 10 && n <= 20)
        {
            dentro++;

        }else{
           fora++;
        }

        printf("\n Números dentro do intervalo: %d ", dentro);
        printf("\n Números fora do intervalo: %d ", fora);

    }while (n < 0);
        {
            printf("\n Número inválido ");
        }

    system("PAUSE");
}
