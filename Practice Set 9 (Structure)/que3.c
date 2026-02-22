#include<stdio.h>            // que: Write a program to illustrate the use of arrow operator > in C.
struct employee
{
    char name[20];
    int salary;

};
int main(){
struct employee e1 = {"Anubhav",20000};
struct employee *ptr = &e1;
printf("Name of Employee: %s\nSalary: %d\n",ptr->name,ptr->salary);

return 0;
}

