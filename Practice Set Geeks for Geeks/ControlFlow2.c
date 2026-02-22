#include<stdio.h>                  //Check Whether Number is Even or Odd
int main(){
    int a;
    printf("ENter a ");
    scanf("%d",&a);

    if(a == 0){
        printf("This whole number");
    }
    else if(a % 2 == 0){
        printf("This is even number");
    }
    else{
        printf("This is odd number");
    }
    return 0;
}
