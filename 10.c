// Write a C program to convert days into years, weeks and days
#include<stdio.h>
int main(){
    int days,weeks;
    float years;

    printf("Enter No. of Days : ");
    scanf("%d",&days);

    weeks = days/7;
    printf("%d days is = %d weeks\n",days,weeks);

    years = days/365;
    printf("%d days is = %f year",days,years);
}