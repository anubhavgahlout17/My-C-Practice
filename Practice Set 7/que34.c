#include<stdio.h>
int main(){                                       // Max and min array
    int arr[10] = {1,23,4,5,-71,6,9,8,7,2};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
       if (arr[i] > max)
       {
          max = arr[i];
       }
       if (arr[i] < min)
       {
        min = arr[i];
       }
    }
    printf("%d max no.\n",max);
    printf("%d Min no.",min);

    return 0;
}