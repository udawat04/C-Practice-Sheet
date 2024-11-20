// - Write a C program that accepts three integers and find the maximum of three

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter first number : ");
    scanf("%d",&num1);

    printf("Enter second number : ");
    scanf("%d",&num2);

    printf("Enter third number : ");
    scanf("%d",&num3);

    if(num1>=num2 && num1>=num3){
        printf("%d is greater than %d and %d",num1,num2,num3);
    }
    else if(num2>=num1 && num2>=3){
        printf("%d is greater than %d and %d", num2, num1, num3);

    }
    else{
        printf("%d is greater than %d and %d", num3, num1, num2);
    }
}