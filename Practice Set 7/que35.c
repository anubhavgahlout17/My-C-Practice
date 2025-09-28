#include<stdio.h>          //linear search
int main(){
    int arr[] = {2,7,3,5,8};
    int n = 5;
    int key;  
    int found = -1;
    printf("Enter the key to be searched: ");
    scanf("%d",&key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
           found = i;
           
        }
        
        }
        
    if (found != -1)
    {
        printf("%d is foundd at index of: %d\n",key,found);
    }
    else{
        printf("%d is Not Found",key);
    }
    
    return 0;
    
}