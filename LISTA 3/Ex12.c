#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    for(x = 2; x <= 12; x += 2)
    {
        printf("%d\n", x);
    }

    for(x = 5; x <= 22; x += 7)
    {
        printf("%d\n", x);
    }

    for(x = 3; x <= 15; x += 3)
    {
        printf("%d\n", x);
    }

    for(x = 1; x <= 5; x += 7)
    {
        printf("%d\n", x);
    }

    for(x = 12; x <= 2; x += 3)
    {
        printf("%d\n", x);
    }

    system("PAUSE");

}
