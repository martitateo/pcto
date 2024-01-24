#include<stdio.h>
int main()
{    
   char c;
   
    printf("Inserisci valore c \n");
   scanf("%c", &c);
   if (c == 'a' || c == 'e' ||c == 'i' || c == 'o' || c == 'u')
   {
        printf("La lettera è una vocale \n");
   }
    else
    {
        printf("La lettera è una consonante \n");
    }
    
     return(0);
} 
