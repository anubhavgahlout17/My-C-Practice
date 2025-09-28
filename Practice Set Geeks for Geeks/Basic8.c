#include<stdio.h>                          //Swap Two Numbers
int main(){
    int a = 7,b = 9, temp;

    temp = a;
    a = b;
    b = temp;

    printf("The value of a is: %d , and b is: %d\n", a , b);

    return 0;
}