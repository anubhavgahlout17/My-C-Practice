#include<stdio.h>
int main(){               //Whether a Number is Positive, Negative, or Zero
    int a;
    printf("ENter a number: ");
    scanf("%d", &a);

    if(a == 0){
        printf("This no. is zero");
    }
    else if(a < 1 ){
        printf("This no. is negative");
    }
    else{
        printf("This no. is positive");
    }
}