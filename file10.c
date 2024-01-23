#include<stdio.h>
int main()
{   
    int x;
    int y;
    printf("Inserire un numero \n");
    scanf("%d", &x);
    printf("Inserire il secondo numero \n");
    scanf("%d", &y);
    if(x%y== 0)
    {
        printf("è un multiplo");
    }
    else
    {
        printf("non è un multiplo");
    }

        
    
    
    return(0);
}
