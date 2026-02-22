#include<stdio.h>                       //Matrix Additon
int main(){
    int arr1[2][5] = {{2,4,5,7,8},{1,2,3,4,5}};
    int arr2[2][5] = {{2,4,5,7,8},{1,2,3,4,5}};
    int sum[2][5];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            sum[i][j] = arr1[i][j]+arr2[i][j];
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
              printf("%d ",sum[i][j]);
        }
        
      printf("\n");
    }


    return 0;

}
 