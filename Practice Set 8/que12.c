#include<stdio.h>                  //Count string without using strlen
int main(){
    char str[20] = "asdfghjklo";
    char count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
    

}