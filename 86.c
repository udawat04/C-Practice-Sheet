// Write a C program to calculate a bike’s average consumption from the given total distance(integer value) traveled(in km) and spent fuel(in liters, float number – 2 decimal point).
#include<stdio.h>
int main(){
    int distance,spent_fuel;
    float avg_consumption;

    printf("Enter Total Distance Cover (in km) : ");
    scanf("%d",&distance);

    printf("Enter Total Fuel Consumed (in lt.) : ");
    scanf("%d",&spent_fuel);

    avg_consumption = distance/spent_fuel;
    printf("Avg consumption : %.2f",avg_consumption);
}