// Write a C program to input any alphabet and check whether it is vowel or consonant
#include<stdio.h>
int main(){
   
    
    char ch;
    printf("Enter any alphabet : ");
    scanf(" %c",&ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a vowel",ch);
    }
    else{
        printf("%c is not a vowel its a consonant",ch);
    }
}