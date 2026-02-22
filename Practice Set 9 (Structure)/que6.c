#include<stdio.h>             //que: Make a system that can store information of 2 students, teachers of your school in the form of structures.
struct studentInfo
{
    char name[20];
    int rollno;
    int class;
};

struct teacherInfo{
    char name[20];
    char sub[20];
    int id;
};

int main(){
    struct studentInfo s[2];
    printf("Enter Student Info: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("Enter Student Name : ");
        scanf("%s",&s[i].name);

         printf("Enter Student Roll No: ");
        scanf("%d",&s[i].rollno);

         printf("Enter Student Class: ");
        scanf("%d",&s[i].class);
        printf("\n");
    }

   struct teacherInfo t[2];
   printf("Enter Teacher Info: \n");
   for (int i = 0; i < 2; i++)
   {
     printf("Enter Teacher Name: ");
     scanf("%s",&t[i].name);
     
     printf("Enter Teaching Subject : ");
     scanf("%s",&t[i].sub);

     printf("Enter Teacher Id: ");
     scanf("%d",&t[i].id);

     printf("\n");
   }
   printf("Student Info: \n");
   for (int i = 0; i < 2; i++)
   {
    printf("Student Name: %s\n",s[i].name);
    printf("Student Roll No: %d\n",s[i].rollno);
    printf("Student Class: %d\n",s[i].class);
    printf("\n");
   }
   printf("Teacher Info: \n");
   for (int i = 0; i < 2; i++)
   {
    printf("Teacher Name: %s\n",t[i].name);
    printf("Teaching Subject: %s\n",t[i].sub);
    printf("Teacher Id: %d\n",t[i].id);
    printf("\n");
     
   }
   return 0;
}
