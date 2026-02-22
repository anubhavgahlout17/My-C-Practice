#include<stdio.h>                                 //Sum of Fibonacci Numbers at Even Indexes up to N Terms 
int fibbo(int a);

int fibbo(int a){
    if(a == 0){
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    for(int i = 0; i<= a; i++){
    
    int fibbo1 = fibbo(a-1);
    int fibbo2 = fibbo(a - 2);
    int fibbo3 = fibbo1 + fibbo2;
    return fibbo3;
    }
}

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    int result = fibbo(a);
    printf("Fibonacci: %d\n",result);
    return 0;
}