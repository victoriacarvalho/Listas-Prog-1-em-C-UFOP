#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    float salario, novoSalario;
    int codigo;

    printf("\n Digite seu salario: \n >>>>> ");
    scanf("%f", &salario);

    printf("\n Digite o código correspondente: \n TECNICO = 1 \n GERENTE = 2 \n OUTROS = 3 \n ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1: 
        novoSalario = (salario * 50) / 100;
        printf("\n Salario atual: %.2f \n Novo salario: %.2f ", salario, novoSalario + salario);
        break;

    case 2: 
        novoSalario = (salario * 30) / 100;
        printf("\n Salario atual: %.2f \n Novo salario: %.2f ", salario, novoSalario + salario);
        break;

    case 3: 
        novoSalario = (salario * 20) / 100;
        printf("\n Salario atual: %.2f \n Novo salario: %.2f ", salario, novoSalario +salario);
        break;
    
    default: printf("\n Cargo nao existente \n ");
        break;
    }

    return 0;
}