#include<stdio.h>                //Display Prime Numbers Between Intervals
int main(){
    int start;
    int end;
    
    printf("from: ");
    scanf("%d",&start);
    printf("TO: ");
    scanf("%d", &end);
    printf("Prime No. Between %d to %d\n",start,end);
    for(int i = start; i <= end; i++){
        if(i < 2){
            continue;
        }
        int isprime = 1;
        for(int j = 2; j*j <= i; j++){
            if(i % j == 0){
            isprime = 0;
            break;
            }
        }
        if (isprime)
        {
            printf("Prime No. %d\n",i);
            
        }
        
    }
    
    return 0;

}