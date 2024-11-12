//  Write a C program to enter length in centimeter and convert it into meter and kilometer
#include<stdio.h>
int main(){
    int length ;
    float meter ,km;
    printf("enter length in cm :");
    scanf("%d",&length);

    meter = length/100.0;
    printf("%d cm is = %.2f meter\n",length,meter);

    km = length/100000.0;
    printf("%d cm is = %.5f kilometer",length,km);
}