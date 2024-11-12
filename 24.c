// Write a C program to check whether a year is leap year or not

// leap year is year which is divisible by 4 but not divisible 100 
#include<stdio.h>
int main(){
    int year;

    printf("Enter the year which you want to check whether it leap year or not : ");
    scanf("%d", &year);

    if (year % 4 == 0  && year % 100 !=0 || year % 400 ==0  )
    {
        printf("The %d year is leap year ", year);
    }
   
    else
    {
        printf("The %d year is not a leap year it is ordinary year",year);
    }
}

 