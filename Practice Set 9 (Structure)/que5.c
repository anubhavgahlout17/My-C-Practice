#include<stdio.h>                      //Create a structure to store complex numbers. (use arrow operator)
struct complex
{
    int real;
    int img;
};

int main(){
    struct complex no1 = {2,4};
    struct complex *ptr = &no1;
    printf("real part: %d\n",ptr->real);
    printf("img part: %d\n",ptr->img);

    return 0;
}