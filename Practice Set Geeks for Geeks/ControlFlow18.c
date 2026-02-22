#include<stdio.h>                    // Check whether the input number is a Neon Number
int main(){
    int n;
    int sum = 0 ;

    printf("Enter n: ");
    scanf("%d",&n);

    int sq = n*n;
    while (sq > 0)
    {
      int  digit = sq % 10;
        sum += digit;
        sq /= 10;
    }
    if(sum == n){
        printf("Neon Num.");
    }
    else{
        printf("Not Neon Num.");
    }
    return 0;
    
}