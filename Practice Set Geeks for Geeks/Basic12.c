#include<stdio.h>                 //Print Prime Numbers From 1 to N 
int main(){
  int a;
  int isprime = 1;

  printf("Enter a Number: ");
  scanf("%d", &a);

  if(a ==0){
    isprime = 0;
  }

  for(int i = 1; i*i <=a; i++){
    if(a % 2 ==0){
        isprime = 0;
    }
  }
  if(isprime){
    printf("This is Prime Number");
  }
  else{
    printf("This is not Prime Number");
  }
return 0;
}