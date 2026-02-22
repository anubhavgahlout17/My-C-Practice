#include<stdio.h>             //Check Leap Year
int main(){
    int leapYear;
    printf("Enter Year: ");
    scanf("%d", &leapYear);

    if(leapYear % 4 == 0){
        printf("This Year is a leap year");
    }
    else{
        printf("This is not Leap Year");
    }
    return 0;
}