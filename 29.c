// Write a C program to input week number and print week day.
#include<stdio.h>

int main(){
    int weeknumber;
    printf("Select a number from 1 to 7 of a week : \n 1.Monday \n 2.Tuesday \n 3.Wednesday \n 4.Thursday \n 5.Friday \n 6.Saturday \n 7.Sunday \n ");
    printf("Enter number : ");
    scanf("%d",&weeknumber);
    switch (weeknumber)
    {
    case 1:
        printf("The day is Monday");
        break;
    case 2:
        printf("The day is Tuesday");
        break;
    case 3:
        printf("The day is Wednesday");
        break;
    case 4:
        printf("The day is Thursday");
        break;
    case 5:
        printf("The day is Friday");
        break;
    case 6:
        printf("The day is Saturday");
        break;
    case 7:
        printf("The day is Sunday");
        break;

    default:
    printf("You Entered Wrong number :");
        break;
    }
    
}