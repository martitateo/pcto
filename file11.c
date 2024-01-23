
#include<stdio.h>
int main()
{   
    float celsius;
    float fahrenheit; 
    float kelvin;
    printf("Inserisci una temperatura in celsius\n");
    scanf("%f", &celsius);
    if(celsius<-273.15)
    {
        printf("errore");
   
    } 
    else
    {
    fahrenheit= 9/5*celsius+32;
    kelvin = celsius+273.15;
    printf("la temperatura in fahreheit è %f \nla temperatura in kelvin %f \n", fahrenheit, kelvin);


    }

    
    
    
    
    
    
    
    return(0);
}