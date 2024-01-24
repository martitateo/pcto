#include<stdio.h>
int main()
{    
    float altezza;
    float base;
    float lato1;
    float lato2;
    float A = base*altezza/2;
    float p = base + lato1 + lato2;
    printf("Inserisci lunghezza dell'altezzaa \n");
    scanf(" %f", &altezza);    
    printf("Inserisci lunghezza della base \n");
    scanf(" %f", &base);
    printf("Inserisci lunghezza del lato1 \n");
    scanf(" %f", &lato1);
    printf("Inserisci lunghezza del lato2 \n");
    scanf("%f", &lato2);
    A = base*altezza/2;
    printf("Calcolo area %f \n", A);
    p = base + lato1 + lato2;
    printf("Calcolo perimetro %f \n", p);
    

    return(0);
} 


