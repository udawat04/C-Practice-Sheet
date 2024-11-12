// Write a C program to print day of week name using switch case.

#include<stdio.h>
int main(){
    int weekday;
    printf("Week days :- \n1.Monday \n2.Tuesday \n3.Wednesday \n4.Thursday \n5.Friday \n6.Saturday \n7.Sunday \n");
    printf("Enter week no. : ");
    scanf("%d",&weekday);

    switch (weekday)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    
    default:
    printf("You Enter incorrect no. ");
        break;
    }
}