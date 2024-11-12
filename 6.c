//Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include<stdio.h>
float pi = 3.14;

int main(){
    int radius,diameter;
    float circumference,area;

    printf("Enter Radius of Circle : ");
    scanf("%d",&radius);

    diameter = 2*radius;
    printf("Diameter of Circle is : %d \n",diameter);

    circumference = 2*pi*radius;
    printf("Circumference of Circle is : %.2f \n",circumference);

    area = pi*radius*radius;
    printf("Area of Circle is : %.2f",area);

}
