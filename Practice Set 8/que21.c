#include<stdio.h>
int main(){
    int arr[] = {5,3,5};
    int arr1[] = {4,9,3};
    int sum[1];
    for (int i = 0; i < 3; i++)
    {
        sum[i] = arr[i]+arr1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",sum[i]);
    }
    return 0;
    
    
}