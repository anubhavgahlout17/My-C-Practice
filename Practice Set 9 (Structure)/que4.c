#include<stdio.h>                        // que: . Create a structure representing a bank account of a customer.
struct bankAcc
{
    char name[50];
    int AccNo;
    char ifscCode[12];
    float balance;
};

int main(){
    struct bankAcc u[3];
    for (int i = 0; i < 3; i++)
    {
       printf("Enter User Name: ");
       scanf("%s",&u[i].name);

       printf("Enter User Account No: ");
       scanf("%d",&u[i].AccNo);

       printf("Enter User Ifsc Code: ");
       scanf("%s",&u[i].ifscCode);

       printf("Enter User Balance: ");
       scanf("%f",&u[i].balance);
       printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
         printf("User Name: %s\n",u[i].name);
         printf("User Account No: %d\n",u[i].AccNo);
         printf("User Ifsc Code: %s\n",u[i].ifscCode);
         printf("User Name: %.2f\n",u[i].balance);
         printf("\n");
    }

    return 0;
}



