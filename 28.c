// Write a C program to check whether a character is uppercase or lowercase alphabet

#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("Enter any character to check whether it is uppercase or lowercase : ");
    scanf(" %c",&ch);

    if(isupper(ch)){
        printf("character %c is Uppercase",ch);
    }
    else{
        printf("character %c is Lowercase",ch);
    }
}