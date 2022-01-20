#include <stdio.h>
#include <locale.h>
#define ALUNOS 10

void notas(float notas1[], float notas2[]);

void media(float notas1[], float notas2[], float media[]);

void relatorio(float notas1[], float notas2[], float media[]);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float notas1[ALUNOS], notas2[ALUNOS], media[ALUNOS];

    notas(notas1, notas2);
    mediaNota(notas1, notas2, media);
    relatorio(notas1, notas2, media);
    printf("\n \n ");

    return 0;
}

void notas(float notas1[], float notas2[])
{
    int i, j = 1;

    printf("\n Digite a 1ª nota de cada aluno a ser avaliado: \n ");

        for(i = 0; i < ALUNOS; i++)
        {
            printf("\n Nota do aluno %d: \n >>>>> ", j++);
            scanf("%f", &notas1[i]);

                if(notas1[i] < 0)
                {
                    printf("\n Nota inválida, digite novamente: \n >>>>> ");
                    scanf("%f", &notas1[i]);
                }
        }
        j = 1;

        printf("\n Digite a 2ª nota de cada aluno a ser avaliado: \n ");

            for(i = 0; i < ALUNOS; i++)
            {
                printf("\n Nota do aluno %d: \n >>>>> ", j++);
                scanf("%f", &notas2[i]);

                if(notas2[i] < 0)
                {
                    printf("\n Nota inválida, digite novamente: \n >>>>> ");
                    scanf("%f", &notas1[i]);
                }
            }
}

void mediaNota(float notas1[], float notas2[], float media[])
{
    int i;

    for(i = 0; i < ALUNOS; i++)
    {
        media[i] = (notas1[i] + notas2[i]) / 2;
    }
}

void relatorio(float notas1[], float notas2[], float media[])
{
   int i, j = 1;

    for(i = 0; i < ALUNOS; i++)
    {
        printf("\n \n \n  Aluno %d: \n ", j++);
        printf("\t Nota 1: %2.f \n ", notas1[i]);
        printf("\t Nota 2: %2.f \n ", notas2[i]);
        printf("\t Média de suas notas: %2.f: \n", media[i]);
    }
}


