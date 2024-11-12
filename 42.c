// Write a C program to check whether an alphabet is vowel or consonant using switch case 

#include<stdio.h>
int main(){
    char ch;
    printf("Enter Any Character to check whether it is vowel or consonant: ");
    scanf(" %c",&ch);

    switch (ch)
    {
    case 'a': case 'A':
    case 'e': case 'E':
    case 'i': case 'I':
    case 'o': case 'O':
    case 'u': case 'U':
        printf(" %c is Vowel",ch);
        break;

    default:
    printf("%c is Consonant",ch);
        break;
    }
}