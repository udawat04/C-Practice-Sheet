// Write a C program to find maximum between two numbers
#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter First Number : ");
    scanf("%d",&num1);

    printf("Enter Second Number : ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("%d is greater than %d",num1,num2);
    }
    else{
        printf("%d is greater than %d ",num2,num1);
    }

}