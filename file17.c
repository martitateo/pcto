#include<stdio.h>
int main()
{    
    int x = 5;
    int y;
    int z;
    float sconto1;
    float sconto2;
    
    printf("Inserisci numero dei prodotti \n");
    scanf("%d", &y);
    while (y>0) 
    {
    z = x*y;
    sconto1 = z-(z* 10/100);
    sconto2 = z-(z* 15/100);
    if (y<30 && y>0)
    {
        printf("costo totale %d\n", z);

    }
    else if(y>30 && y<50)
    {
        printf("il costo totale è %f\n", sconto1);

    }
    else if (y>50)
    {
        printf("il costo totake è %f\n", sconto2);

    }
        
        printf("Inserisci numero dei prodotti \n");
        scanf(" %d", &y);
        
    }
    return(0);
} 




