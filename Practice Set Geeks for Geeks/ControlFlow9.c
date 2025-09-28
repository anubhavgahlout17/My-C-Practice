#include<stdio.h>                 //Make a Simple Calculator 
int main(){
    int value1;
    int value2;
    int calculator;

    printf("Enter Value 1: ");
    scanf("%d",&value1);
    
    printf("Enter Value 2: ");
    scanf("%d", &value2);
    printf("Enter 1 for add\n");
    printf("Enter 2 for sub\n");
    printf("Enter 3 for multiply\n");
    printf("Enter 4 for devide\n");
     scanf("%d",&calculator);
    

    switch(calculator)
    {
    case 1: printf("%d + %d = %d\n",value1,value2,value1+value2);
        break;
    case 2: printf("%d - %d = %d\n",value1,value2,value1-value2);
        break;
     case 3: printf("%d X %d = %d\n",value1,value2,value1*value2);
        break;
    case 4 : printf("%d/%d = %d\n",value1,value2,value1/value2);
        break;
    }
    return 0;
}