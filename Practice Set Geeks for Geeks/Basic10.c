#include<stdio.h>                 //Find the Size of int, float, double, and char
int main(){
    
    printf("The Size of integers is: %u bytes\n", sizeof(int));
    printf("The Size of float is: %u bytes\n", sizeof(float));
    printf("The Size of double is: %u bytes\n", sizeof(double));
    printf("The Size of char is: %u bytes\n", sizeof(char));
    return 0;
}