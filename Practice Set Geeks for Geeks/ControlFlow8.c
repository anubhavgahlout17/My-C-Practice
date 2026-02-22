#include<stdio.h>    
int main(){   
    int n;                          //Factorial of a Number 
int fact = 1;
printf("Enter no.: ");
scanf("%d", &n);


for (int i = 1; i <= n; i++)
{
    if(n == 0 || n == 1){
    return 1;
}
fact *= i;
}

printf("The Factorial is: %d\n", fact);

return 0;


}