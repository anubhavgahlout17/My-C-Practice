#include<stdio.h>                             // Cretae two dimention vector using structure in C
struct vector
{
    int i;
    int j;
};

int main(){
    struct vector v;
    v.i = 1;
    v.j = 2;

    printf("The Value of Vector is: %d i + %d j\n",v.i,v.j);

    return 0;
}

