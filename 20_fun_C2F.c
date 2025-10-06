#include<stdio.h>

float c2f(int);

float c2f(int x){
    return ((9*x)/5)+32 ;
}
    int main (){
        
        float a , fahrenheit;
         
        printf ("enter the temperature in celcius \n");
        scanf("%f", &a);
        
        fahrenheit = c2f(a);
        
        printf (" the temperature in fahrenheit is %.2f", fahrenheit);
        
        
        
        return 0;
    }

