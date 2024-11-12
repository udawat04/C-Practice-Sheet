// Write a C program to enter length and breadth of a rectangle and find its area.
#include<stdio.h>
int main(){
    int length,breadth,area;

    printf("Enter Length of Rectangle : ");
    scanf("%d",&length);

    printf("Enter Breadth of Rectangle : ");
    scanf("%d",&breadth);

    area = length*breadth;

    printf("Area of Rectangle : %d",area);
    
}