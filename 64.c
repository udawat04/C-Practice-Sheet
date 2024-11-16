// Write a C program to check whether a number is palindrome or not
#include<stdio.h>
int main()
{
    int number,digit,original_number,reverse=0 ;
    printf("Enter Number : ");
    scanf("%d",&number);
    original_number=number;
    while (number!=0)
    {
       digit = number%10;
       reverse = reverse*10+digit;
       number = number/10;
    }
    if (original_number==reverse)
    {
        printf("The %d is a palindrome number : ",original_number);
    }
    else{

    printf("The %d is not a palindrome number : ",original_number);
    }
    
}