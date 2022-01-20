#include <stdio.h>

int main ()
{
    int n = 10, i, j;

    printf("\n (A) \n \n");
    for(i = 9; i >= 0; i--)
    {
       for(j = 0; j < i; j++)
       {
           printf("*");
       }
        printf("\n");
    }

    printf("\n (B) \n \n");
    for(i = 0; i <= 9; i++)
    {
       for(j = 0; j <= 9 - i; j++)
       {
           printf(" ");
       }
            for(j = 0; j <= i; j++)
            {
                printf("*");
            }
        printf("\n");
    }

    return 0;
}