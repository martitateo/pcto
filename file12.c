#include<stdio.h>
int main()
{   
    int x;
    int y;
    int z;
    int sottrazione1;
    int sottrazione2;
   
    printf("Inserisci numero1 \n");
    scanf(" %d", &x);
    printf("Inserisci numero2 \n");
    scanf(" %d", &y);
    printf("Inserisci numero3 \n");
    scanf(" %d", &z);
    
    sottrazione1=x-y;
    sottrazione2=y-z;
    
    if(sottrazione1==sottrazione2)
    {
        printf("sono in progressione aritmetica");
    }
    else
    {
        printf("non sono in progressione aritmetica");
    }

    
    
    return(0);
}