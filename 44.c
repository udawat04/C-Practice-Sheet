// Write a C program to check whether a number is even or odd using switch case.

#include<stdio.h>

int main(){
    int number ,check;
    printf("Enter The Number : ");
    scanf("%d",&number);

    check = number%2;

    switch (check)
    {
    case 0:
        printf("The number %d is Even Number : ", number);
        break;
    case 1:
        printf("The number %d is Odd Number : ",number);
        break;

            default :
            printf("Error 404 not found ");
             break;
    }

}