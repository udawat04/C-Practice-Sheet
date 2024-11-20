// - Write a C program to convert a given integer(in days)to years, months and days, assumes that all months have 30 days and all years have 365 days.

#include<stdio.h>
int main(){
    int number,year,month,day,remain;
    printf("Input no. of days : ");
    scanf("%d",&number);

    if(number>0){
        year =number/365;
        remain =number%365;
        month = remain/30;
        day = remain%30;

        printf("Year : %d\n",year);
        printf("Month : %d\n",month);
        printf("Day : %d",day);
    }
}