// Write a C program print total number of days in a month using switch case

#include<stdio.h>
int main(){
    int month;
    printf("Months are :- \n1.January \n2.February \n3.March \n4.April \n5.May \n6.June \n7.July \n8.August \n9.September \n10.October \n11.November \n12.December \n");
    printf("Enter Month : ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("Number of days in January : 31");
        break;
    case 2:
        printf("Number of days in February : 28 or 29");
        break;
    case 3:
        printf("Number of days in March : 31");
        break;
    case 4:
        printf("Number of days in April : 30");
        break;
    case 5:
        printf("Number of days in May : 31");
        break;
    case 6:
        printf("Number of days in June : 30");
        break;
    case 7:
        printf("Number of days in July : 31");
        break;
    case 8:
        printf("Number of days in August : 31");
        break;
    case 9:
        printf("Number of days in September : 30");
        break;
    case 10:
        printf("Number of days in October : 31");
        break;
    case 11:
        printf("Number of days in November : 30");
        break;
    case 12:
        printf("Number of days in December : 31");
        break;
    
    default:
        printf("You Entered Wrong Month : ");
        break;
    }
}