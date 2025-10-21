#include<stdio.h>                         //maxx and min
int main(){
   int arr[] = {25,55,44,3,9,7,44,98};
   int max = arr[0];
   int min = arr[0];
   for (int  i = 0; i < 8; i++)
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
   printf("Max: %d\n",max);
   printf("Min: %d",min);
   
   return 0;
}