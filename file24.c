#include<stdio.h>
int main()
{   
    int a;
    int b;
    int c;
    
    printf("Inserisci lato1 \n");
    scanf("%d", &a);
    printf("Inserisci lato2 \n");
    scanf("%d", &b);
    printf("Inserisci lato3 \n");
    scanf("%d", &c);

    if (a+b>c && c+a>b && c+b>a)
    {
        printf("è un triangolo \n");
    }
    else
    { 
        printf("non è un triangolo \n");

        return(0);
    } 

    if ((a == b) && (b == c) && (a == c))
    {
        printf("Il triangolo è equilatero \n");
    }
    else if ((a != b) && (b != c) && (a !=c))
    {
        printf("Il triangolo è scaleno \n");
    }
    else if ( (a == b) && (a != c) && (b != c) || ( a == c) && ( a != b) && ( c!= b) || ( b == c) && ( b !=a ) && (c != a) )
    {
        printf("Il triangolo è isoscele \n");
    }
    return(0);
} 
