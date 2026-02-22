#include<stdio.h>                    //Pyramid trianlge pattern
int main(){
    for (int i = 1; i <= 10; i++)
    {
            for (int j = 1; j <= 10-i; j++)
            {
                printf("  ");
            }
           for (int j = 1; j <= i; j++)
           {
            printf("%d ",j);
           }
           printf("\n");
           
    }
     return 0;
}