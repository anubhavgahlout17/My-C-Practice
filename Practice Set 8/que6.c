#include<stdio.h>                         //     Reverse an array
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int rev[6];
    for (int i = 0; i < n; i++)
    {
    rev[i] = arr[n-i-1];
       
         printf("%d ",rev[i]);
        
    }
   
    return 0;
    
}