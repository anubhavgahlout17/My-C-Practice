#include<stdio.h>       // even and odd
int main(){
    
        int arr[] = {1,2,3,4,5,6,7,8,9};
        int even = 0;
        int odd = 0;
        for (int i = 0; i < 9; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else{
                odd++;
            }   
        }
    

    printf("Even: %d\n",even);
    printf("Odd: %d", odd);
      return 0;

}