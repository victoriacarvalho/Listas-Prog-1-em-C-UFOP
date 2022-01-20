#include <stdio.h>
#include <locale.h>

    int conceito(int nota)
    {
        char a, b, c, d;

        while(nota >= 0 && nota <= 49)
        {
            printf("\n A nota digitada recebeu o conceito: D \n ");
            break;
        }

         while(nota >= 50 && nota <= 69)
        {
            printf("\n A nota digitada recebeu o conceito: C \n ");
            break;
        }

         while(nota >= 70 && nota <= 89)
        {
            printf("\n A nota digitada recebeu o conceito: B \n ");
            break;
        }

         while(nota >= 90 && nota <= 100)
        {
            printf("\n A nota digitada recebeu o conceito: A \n ");
            break;
        }
    }

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int notaAluno, resultado;
    char opcao;

    printf("\n Digite a nota recebida: \n >>>>> ");
    scanf("%d", &notaAluno);

    resultado = conceito(notaAluno);

    printf("\n Deseja verificar outra nota? \n \n Digite s ou n \n >>>>> ");
    scanf(" %c", &opcao);

    while (opcao == 's' || opcao == 'S')
    {
         return main();
         continue;
    }

    while(opcao == 'n' || opcao == 'N')
    {
        printf("\n Fim do programa :) \n ");
        break;
    }

    return 0;
}
