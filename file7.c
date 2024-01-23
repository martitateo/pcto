#include<stdio.h>
int main()
{ 
    int x;
    int y;
    printf("Inserisci il primo numero \n");
    scanf ("%d", &x);
    printf("Inserisci il secondo numero \n");
    scanf("%d", &y);
    if(x > y)
    {
        printf("x è maggiore di y \n");
    }
    else
    {   
        printf("x è minore di y \n");
    }
    
    
    return(0);
}