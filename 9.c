//  Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit-32)*5/9;
    printf("%.1f degree Fahrenheit temperature is = %.1f degree Celsius",fahrenheit,celsius);

}