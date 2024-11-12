// Write a C program to find maximum between two numbers using switch case
#include<stdio.h>
int main(){
    int num1,num2,max;
    printf("Enter First Number : ");
    scanf("%d",&num1);

    printf("Enter Second Number : ");
    scanf("%d",&num2);

    max = num1-num2;

    switch ((max > 0) - (max < 0))
    {
    case 0:
        printf("Both Number %d and %d is equal :",num1,num2);
        break;
    case 1:
        printf("%d is greater than %d",num1,num2);
        break;
    case -1:
        printf("%d is greater than %d",num2,num1);
        break;
    
    default:
    printf("Error 404 Not Found");
        break;
    }
}