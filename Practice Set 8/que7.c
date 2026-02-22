#include<stdio.h>                     //Ascending order bubble short
int main(){
    int arr[] = {24,65,-42,-1,42,47};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {if (arr[i]>arr[j])
        {
             int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
           
        }
        
    }

    printf("Ascending order: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
    
}