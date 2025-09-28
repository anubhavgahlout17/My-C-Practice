#include<stdio.h>                    //   sum of an arrray
int main(){
    int arr[5] = {2,5,3,5,8};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
       sum = sum + arr[i];
    }
    printf("Sum is: %d",sum);
    return 0;
    
}