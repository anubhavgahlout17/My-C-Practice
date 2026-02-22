#include<stdio.h>                      //Find Simple Interest
int main(){
    int P;
    int R;
    int T;

    printf("Enter Principal amount (P): ");
    scanf("%d", &P);

     printf("Enter Rate of Interest (R): ");
    scanf("%d", &R);

     printf("Enter Time Period (T): ");
    scanf("%d", &T);

    printf("Simple Interest is: %d", (P*R*T)/100);

    return 0;
}