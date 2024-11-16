// Write a C program to find sum of first and last digit of a number.

#include<stdio.h>
int main(){
    int number,firstdigit,lastdigit,sum;
    printf("Enter Number : ");
    scanf("%d",&number);

    lastdigit=number%10;

    firstdigit=number;
    while(firstdigit>=10){
        firstdigit =firstdigit/10;
    }
    sum = firstdigit+lastdigit;
    printf("First Digit is : %d\n",firstdigit);
    printf("Last Digit is : %d\n",lastdigit);
    printf("Sum of first and last digit : %d",sum);
}