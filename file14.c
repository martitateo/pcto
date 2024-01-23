#include<stdio.h>
int main()
{   
    int x;
    int y;
    int z;
    printf("Inserisci primo lato \n");
    scanf(" %d", &x);
    printf("Inserisci secondo lato \n");
    scanf(" %d", &y);
    printf("Inserisci terzo lato \n");
    scanf(" %d", &z);
    
        if (x+y>z && z+x>y && z+y>x)
    {
        printf("è un triangolo \n");

    }
    else
    { 
        printf("non è un triangolo \n");

    }
    return(0);
}