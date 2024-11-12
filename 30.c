// Write a C program to input month number and print number of days in that month
#include<stdio.h>

int main(){
    int monthnumber;
    printf("Select Month from 1 to 12 : \n 1.January \n 2.February \n 3.March \n 4.April \n 5.May \n 6.June \n 7.July \n 8.August \n 9.September \n 10.October \n 11.November \n 12.December \n");

    printf("Enter number : ");
    scanf("%d",&monthnumber);

    switch (monthnumber)
    {
    case 1:
        printf("The Month is January");
        break;
    case 2:
        printf("The Month is February ");
        break;
    case 3:
        printf("The Month is March");
        break;
    case 4:
        printf("The Month is April");
        break;
    case 5:
        printf("The Month is May");
        break;
    case 6:
        printf("The Month is June");
        break;
    case 7:
        printf("The Month is July");
        break;
    case 8:
        printf("The Month is August");
        break;
    case 9:
        printf("The Month is Septemer");
        break;
    case 10:
        printf("The Month is October");
        break;
    case 11:
        printf("The Month is November");
        break;
    case 12:
        printf("The Month is December");
        break;
    
    default:
    printf("You Entered Wrong Number ");
        break;
    }
}