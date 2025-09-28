#include<stdio.h>                    //Add Two Complex Numbers 
int main(){
    float real1 = 2;
    float imag1 = 4;
    float real2 = 7;
    float imag2 = 9;

    float sumReal = (real1+real2);
    float sumImag = (imag1+imag2);


    printf("Sum is: %.2f + %.2fi\n", sumReal,sumImag);
    return 0;
}