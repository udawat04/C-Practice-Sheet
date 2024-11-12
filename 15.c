// Write a C program to calculate area of an equilateral triangle
// Equilateral Triangle is triangle whose all sides are equal 

#include<stdio.h>
float sqrt3 =1.732;
 int main(){
    int side ;
    float area;
    printf("Enter Side Of Triangle : ");
    scanf("%d",&side);

    area = (sqrt3/4)*side*side;
    printf("Area of Equilateral Triangle is = %.2f",area);

 }