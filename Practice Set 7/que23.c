#include<stdio.h>           // check palindrome no.
#include<string.h>
int main(){
    char str[10];
    int flag = 0;        //palidrome
    int len;
    printf("Enter a String: ");
    scanf("%s",&str);
   
       len = strlen(str);
       for (int i = 0; i < len/2; i++)
       {
                if (str[i] != str[len - i - 1])
                {
                    flag = 1; // Not a palindrome
                }
                
       }
       if(flag == 0){
        printf("This is Palindrome");
       }
       else{
        printf("This is not Palindrome");
       }
       return 0;

}