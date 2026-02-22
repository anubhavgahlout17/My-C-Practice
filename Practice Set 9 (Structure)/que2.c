#include<stdio.h>       // Write a function 'sumVector' which returns the sum of two vectors passed to it.
struct vector
{
    int x;
    int y;
};

struct vector sumvector(struct vector v1,struct vector v2){
    struct vector v3 = {v1.x + v2.x,v1.y+v2.y};
    return v3;

}

int main(){
    struct vector v1 = {2,4};
    struct vector v2 = {2,3};
    struct vector v3 = sumvector(v1,v2);
    printf("Sum of Vector is: %d i + %d j\n",v3.x,v3.y);

    return 0;
}

