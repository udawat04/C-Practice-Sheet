// - Write a C program to convert specified days into years, weeks and days.Note:Ignore leap year.
#include<stdio.h>
int main(){
    int number,year,week,day,remain_day;
    printf("Enter Number of Days : ");
    scanf("%d",&number);

    if(number>0){
        year = number / 365;              // Calculate years
        remain_day = number % 365; // Remaining days after converting to years

        week = remain_day / 7; // Calculate weeks
        day = remain_day % 7;

        printf("Year : %d\n", year);
        printf("Week: %d\n", week);
        printf("Day : %d", day);
    }


}