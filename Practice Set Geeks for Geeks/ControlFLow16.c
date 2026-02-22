#include<stdio.h>             //Reverse a Number
int main(){
int n;
int reverse;

printf("Enter no: ");
scanf("%d",&n);
for (int i = n; i >= 1; i--)
{ reverse = i;
    printf("%d\n",reverse);
}

return 0;

}