#include<stdio.h>
int main()
{   
    int data;
    
    printf("In che anno sei nato? \n");
    scanf("%d", &data);

    int anniprima = 1969 - data;
    int annidopo = data - 1969;

    if(data == 1969)
    {
        printf("Sei nato nell'anno in cui l'uomo è atterrato sulla luna per la prima volta \n");
    }
    else if (data < 1969)
    {
        printf("Sei nato %d anni prima del primo atterraggio dell'uomo sulla luna \n", anniprima);

    }
    else if (data > 1969)
    {
        printf( "Sei nato %d anni dopo il primo atterraggio dell'uomo sulla luna \n", annidopo);
    }
    
    return(0);
} 
