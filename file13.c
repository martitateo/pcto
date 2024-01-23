#include<stdio.h>
int main()
{   
    int x;
    printf("Inserisci anno \n");
    scanf("%d", &x);
    if(x%4==0 || x%400==0 && x%100!=0)
    {
        printf("l'anno è bisestile");
    }
    else
    {

        printf("l'anno non è bisestile");
    }



    return(0);
}