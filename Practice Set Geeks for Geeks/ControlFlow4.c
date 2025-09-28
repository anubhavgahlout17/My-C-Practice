                         // Find Largest Number Among Three Numbers
#include<stdio.h>
int main(){
    int a = 56, b = 67, c = 78;
    if(a>b && a>c){
        printf("%d is largest number", a);
    }
    else if (b>a && b>c)
    {
        printf("%d is largest", b);
    }
    else{
        printf("%d is largest", c);
    }
    return 0;
}