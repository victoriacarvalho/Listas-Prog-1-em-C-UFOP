#include <stdio.h>
#include <locale.h>
#include <math.h>

struct Ponto
{
    int X,Y;

}Ponto;

int main()
{
    setlocale(LC_ALL, "Portuguese");

	typedef struct Ponto X,Y;
	float distancia;

	printf("\n Digite os pontos X e Y separando - os \n >>>>> ");
	scanf("%d %d", &Ponto.X, &Ponto.Y);

	distancia = sqrt(pow(Ponto.X, 2) + pow(Ponto.Y, 2));
	printf("\n A distância do ponto digitado a origem: %.2f\n", distancia);

    printf(" \n ");

    system("PAUSE");
}

