#include<stdio.h>
#include<string.h>
struct student{
    int roll_No;
    float cgpa;
    char name[100];
};

int main(){
     struct student s1;
     strcpy(s1.name,"Anubhav");
     s1.cgpa = 7.55;
     s1.roll_No = 56;

     printf("Stdent name: %s\n",s1.name);
     printf("Student roll no: %d\n",s1.roll_No);
     printf("Studnet cgpa: %.2f\n",s1.cgpa);
     return 0;
}