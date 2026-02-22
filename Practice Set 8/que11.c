#include<stdio.h>                //Armstrong Number
int main(){
    int num;
    int result = 0;
    int remainder;
    printf("Enter No: ");
    scanf("%d",&num);

    int original = num;

    while (num != 0)
    {
        remainder = num % 10;
        result = result + (remainder*remainder*remainder);
        num = num/10;
    }
    if (original == result)
    {
        printf("%d is armstrong number",original);
    }
    else{
        printf("%d not armstrong number",original);
    }
    return 0;
    
}