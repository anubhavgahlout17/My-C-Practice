#include<stdio.h>          // Palindrome numbers
int main(){
    int num;
    int remanider;
    int reversed = 0;

    printf("Enter no: ");
    scanf("%d",&num);
    int original = num;


    while (num != 0)
    {
        remanider = num % 10;
        reversed = reversed * 10 + remanider;
        num = num/10;
    }
    if (original == reversed)
    {
         printf("%d this palidrome no.",original);
    }
    else{
        printf("%d this is not palidrome",original);
    }
    
    return 0;
}