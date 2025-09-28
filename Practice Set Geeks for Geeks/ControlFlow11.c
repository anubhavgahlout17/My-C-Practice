#include<stdio.h>               //Print Fibonacci Series
int fibbo(int n);
int fibbo(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibbo1 = fibbo(n-1);
    int fibbo2 = fibbo(n-2);
    int fibbo3 = fibbo1+fibbo2;
    return fibbo3;
}
int main(){
    int n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    int result = fibbo(n);
    printf("Fubonacci no. is: %d", result);
    return 0;
    
}

