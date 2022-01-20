#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main ()
{   
    setlocale(LC_ALL, "Portuguese");    

    printf("\n Char ocupa: %d byte", sizeof(char));
    printf("\n Double ocupa: %d bytes", sizeof(double));
    printf("\n Float ocupa: %d bytes", sizeof(float));
    printf("\n Int ocupa: %d bytes \n", sizeof(int));

    printf(" \n "); 
    
    return 0;
}