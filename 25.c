// Write a C program to check whether a character is alphabet or not
// In this we use ctype header file for using isdigit() function which check whether it is number or not

#include<stdio.h>
#include <ctype.h>
int main(){
    char ch;

    printf("Enter any character  : ");
    scanf(" %c",&ch);

    if(isdigit(ch)){
        printf("%c is number not alphabet ",ch);
    }
    else{
        printf("%c is alphabet not a number ",ch);
    }
}