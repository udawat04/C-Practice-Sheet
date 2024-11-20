// Write a C program to convert a given integer(in seconds) to hours, minutes and seconds
#include<stdio.h>
int main(){
    int number,hour,min,sec,remain;
    printf("Enter Number : ");
    scanf("%d",&number);

    if(number>0)
    {
        hour = number/3600;
        remain =number%3600;
        min =remain/60;
        sec = remain%60;

        printf("Hour : %d\n",hour);
        printf("Min : %d\n",min);
        printf("Sec : %d",sec);
    }
}