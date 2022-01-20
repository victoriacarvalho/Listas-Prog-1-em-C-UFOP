#include <stdio.h>
#include <locale.h>
#define TAMANHO 2

void lerDados (int matricula[TAMANHO], float salario[TAMANHO]);
void relatorio(int matricula[], float salario[], float reajuste[]);

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float salario1[TAMANHO], relatorio1[TAMANHO];
    int matricula[TAMANHO];

    lerDados(matricula, salario1);
    relatorio(matricula, salario1, relatorio1);

    printf("\n \n ");

    return 0;
}

void lerDados (int matricula[TAMANHO], float salario[TAMANHO])
{
    int j = 1, funcionario = 1, i, percentual;
    float reajuste[TAMANHO];

    for(i = 0; i < TAMANHO; i++)
    {
        printf("\n Funcionario %d, digite sua matricula: \n >>>>> ", j++);
        scanf("%d", &matricula[i]);

         if(matricula[i] < 0)
                {
                    printf("\n Matrícula inválida, digite novamente: \n >>>>> ");
                    scanf("%d", &matricula[i]);
                }
        }
        j = 1;

    for(i = 0; i < TAMANHO; i++)
    {
        printf("\n FUncionario %d, digite seu salario: \n >>>>> ", j++);
        scanf("%f", &salario[i]);

        if(salario[i] < 0)
                {
                    printf("\n Valor inválido, digite novamente: \n >>>>> ");
                    scanf("%f", &salario[i]);
                }
    }

    for( i = 0; i < TAMANHO; i++)
    {
        if(matricula[i] % 2 == 0)
        {
           reajuste[i] = (0.15 * salario[i]);
           reajuste[i] = (salario[i] + reajuste[i]);
           percentual = 15;
        }else
            if(matricula[i] % 2 != 0)
            {
              reajuste[i] = (0.20 * salario[i]);
              reajuste[i] = (salario[i] + reajuste[i]);
              percentual = 20;
            }
           
        }
}

void relatorio(int matricula[], float salario[], float reajuste[])
{
   int i, j = 1, percentual;
   float ajuste[TAMANHO];


    for(i = 0; i < TAMANHO; i++)
    {
        if(matricula[i] % 2 == 0)
        {
            ajuste[i] = (0.15 * salario[i]);
            ajuste[i] = (salario[i] + ajuste[i]);
            percentual = 15;

            }else{
                ajuste[i] = (0.20 * salario[i]);
                ajuste[i] = (salario[i] + ajuste[i]);
                percentual = 20;
            }

        printf("\n \n \n  Funcionário %d: \n ", j++);
        printf("\t Matrícula %d \n ", matricula[i]);
        printf("\t Salário base: %2.f \n ", salario[i]);
        printf("\t Percentual de aumento: %d \n ", percentual);
        printf("\t Salário corrigido: %2.f\n", ajuste[i]);
    }
}
