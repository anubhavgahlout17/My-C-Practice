#include<stdio.h>                             // Check Whether a Character is Vowel or Consonant 
int main(){
    char check;
    char vowels = 'a,e,i,o,u';
printf("Enter Alphabet: ");
scanf("%c",&check);

if(check == 'a'|| check == 'e' || check == 'i' || check == 'o' || check == 'u'){
    printf("%c 'Vowel'", check);
}
else{
    printf("%c 'Consonant", check);
}
return 0;
}