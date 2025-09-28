#include<stdio.h>                      // Reverse string
#include <string.h>
int main(){
    char str[10] = "Anubhav";
    int n = strlen(str);
    char rev[10];
    for (int i = 0; i <= n; i++)
    {
        rev[i] = str[n-i - 1];
    }
    rev[n] = '\0';
    
        printf("%s",rev);
    
    return 0;
}