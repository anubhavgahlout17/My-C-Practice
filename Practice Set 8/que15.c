#include<stdio.h>             // First & second largest num in an array
int main(){
    int arr[] = {25,45,77,96,35,78,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first = -99999, second = -99999;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>first)
        {
            second = first;
            first =arr[i]; 
        }
        else if (arr[i]>second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    printf("First largest: %d\n",first);
    printf("Second largest: %d\n",second);
}