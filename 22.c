// Write a C program to check whether a number is divisible by 5 and 11 or not
#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of number : ");
    scanf("%d",&num);

    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("The number %d is divisible by 5 and also divisible by 11 ", num);
        
    }
    else if (num%5==0)
    {
        printf("The number %d is divisible by 5 ",num);
       

    }
    else if (num%11==0)
    {
        printf("The number %d is divisible by 11 ",num);
       

    }
    else{
        printf("The number %d is not divisible by 5 and 11",num);
    }
    
}