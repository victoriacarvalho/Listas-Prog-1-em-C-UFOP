#include <stdio.h>
#include <locale.h>

int funcaoDias(int anos, int meses, int dias)
{
     int retornoAnoDias, retornoMesesDias, retornoDias, total;

     retornoAnoDias = anos * 365;
     retornoMesesDias = meses * 30;
     retornoDias = dias * 1; // s? pra garantir

     total = retornoAnoDias + retornoMesesDias + dias;

     return total;

}

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano, idade, resultado;

    printf("\n Digite a sua idade: \n >>>>> ");
    scanf("%d", &idade);

    printf("\n Digite quantos meses se passaram desde seu último aniversário: \n >>>>> ");
    scanf("%d", &mes);

    printf("\n Digite quantos dias se passarram:\n >>>>> ");
    scanf("%d", &dia);

    resultado = funcaoDias(idade, mes, dia);

    printf("\n Sua idade expressa em dias é: %d \n ", resultado);

    return 0;
}

 