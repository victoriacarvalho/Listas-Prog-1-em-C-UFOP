#include <stdio.h>
#include <string.h>
#include <ctype.h> //verificar

#define TAMANHO 50

int main()
{

    char fraseComEspaco[TAMANHO],str1[TAMANHO], str2[TAMANHO];
    int tamcomespaco,tam, i, j;

    printf("\n Digite uma frase: \n >>>>> ");
    gets(fraseComEspaco);

    tamcomespaco = strlen(fraseComEspaco);

    for(i = 0, j = 0; i < tamcomespaco; i++)
    {
        if(isalpha(fraseComEspaco[i]))
        {
            str1[j] = fraseComEspaco[i];
            j++;
        }   
    }

    str1[j] = '\0';

    tam = strlen(str1);

    for (i = tam - 1, j = 0; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }
    
    str2[tam] = '\0';

    if (strcmpi(str1,str2) == 0)
    {
         printf("\n EH PALINDROMO \n");

    }else{
       printf("\n NAO EH PALINDROMO \n"); 
    }
    

    return 0;
}