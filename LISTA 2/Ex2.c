#include <stdio.h>
#include <locale.h>
#include <math.h>
#define A 1.5
#define B 4
#define C 2
#define D 3
#define E 1.2
#define F 4.3

int main ()
{
    setlocale(LC_ALL, "pt-BR");
    int a, b, c, d;

    printf("\n Exibindo resultado das operações: \n");
    a = (A * (C + D ) / (B * (E + F)));
    b = pow (A , (A + B)) / (E + F) + D;
    c = (A + pow (C, 2) + 2 * C * D + D + D / pow (B , 2) * D) * 1 / C;
    d = (- B + sqrt (B * B) - 4 * A * C) / 2;
    
    printf ("\n a) %d\n", a);
    printf ("\n b) %d\n", b);
    printf ("\n c) %d\n", c);
    printf ("\n d) %d\n", d);

    return 0;
}