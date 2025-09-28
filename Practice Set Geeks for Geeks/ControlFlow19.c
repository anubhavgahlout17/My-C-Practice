#include<stdio.h>                                     //Find All Factors of a Natural Number
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0){
            printf("Factor of %d is: %d\n", n , i);
        }
        
    }
    return 0;
    

}