#include<stdio.h>
int main()
{ 
    int x;
    int y = 18;
    printf("Inserisci un numero");
    scanf("%d", &x);
    if(x >= y)
    {
        printf("è maggiorenne \n");
    }
    else 
    {
        printf("è minorenne \n");



    }

    
    return(0);
}

