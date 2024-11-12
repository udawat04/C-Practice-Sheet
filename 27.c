// Write a C program to input any character and check whether it is alphabet, digit or special character
#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("Enter any character : ");
    scanf(" %c",&ch);

    if(isdigit(ch)){
        printf("%c is a number",ch);
    }
    else if (isalpha(ch))
    {
       printf("%c is alphabet",ch);
    }
    else{
        printf("%c is a special character",ch);
    }
    
}