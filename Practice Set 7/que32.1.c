#include<stdio.h>                           //Matrix Transpose
int  main(){ 
    int arr1[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};              // 2 Rows 5 column
    int arr2[5][2];                                          // 5 rows 2 column

    for (int i = 0; i < 2; i++)                   // loop for rows         (5 Rows)
    { 
        for (int j = 0; j < 5; j++)               // loop for column        (2 column)
        {
            arr2[j][i] = arr1[i][j];
        }   
    }
    for (int i = 0; i < 5; i++)               // loop for rows     (5 Rows)
    {
        for (int j = 0; j < 2; j++)           //loop for column  (2 colmn)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}