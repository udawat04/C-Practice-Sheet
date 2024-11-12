// Write a C program to find maximum between three numbers
#include<stdio.h>
int main(){
    int num1,num2,num3;

    printf("Enter First Number : ");
    scanf("%d",&num1);

    printf("Enter Second Number : ");
    scanf("%d",&num2);

    printf("Enter Third Number : ");
    scanf("%d",&num3);

    if(num1>=num2 && num1>=num3){
        printf("%d is Greater than %d and %d ", num1,num2,num3);
    }
    else if (num2>=num1 && num2>=num3)
    {
        printf("%d is Greater than %d and %d",num2,num1,num3);
    }
    else{
        printf("%d is Greater than %d and %d",num3,num1,num2);
    }
    
}