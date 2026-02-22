#include<stdio.h>         //Print Alphabets From A to Z Using Loop
int main(){
    char alphabet;
    for (int  i = 'A'; i <= 'Z'; i++)
    {
        alphabet = i;
        printf("%c\n", alphabet);
    }
    return 0;
    
}