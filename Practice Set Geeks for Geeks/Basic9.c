#include<stdio.h>               //Calculate Fahrenheit to Celsius

int main(){
    float Fahrenheit;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    printf("The Temperature in Celcius is: %f\n", ((Fahrenheit - 32.0) * 5.0 / 9.0));
    
    return 0;

}