#include<stdio.h>                     //Calculate Sum of Natural Numbers 
int main(){
    int a;
    int sum = 0;
    printf("Enter no.: ");
    scanf("%d",&a);

    for(int i = 1; i <= a; i++){
        sum = sum+i;
    }
    printf("The sum is: %d", sum);
    return 0;
}