// Write a C program to swap first and last digits of a number
#include<stdio.h>

int main(){
    int number,firstdigit,lastdigit;
    printf("Enter Number : ");
    scanf("%d",&number);

    lastdigit=number%10;

    firstdigit=number;
    while(firstdigit>=10){
        firstdigit=firstdigit/10;
    }

    printf("Before Swap :\n");
    printf("First Digit is : %d\n",firstdigit);
    printf("Last Digit is : %d\n",lastdigit);

    firstdigit =firstdigit+lastdigit;
    lastdigit = firstdigit-lastdigit;
    firstdigit = firstdigit-lastdigit;

    printf("After Swap : \n");
    printf("First Digit is : %d\n", firstdigit);
    printf("Last Digit is : %d\n", lastdigit);
}