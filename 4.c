// Write a C program to enter length and breadth of a rectangle and find its perimeter.

#include<stdio.h>

int main(){
    int length , breadth ,perimeter;

    printf("Enter Length Of Rectangle : ");
    scanf("%d",&length);

    printf("Enter Breadth Of Rectangle : ");
    scanf("%d",&breadth);

    perimeter= (length+breadth)*2;

    printf("Perimeter of Rectangle is :- %d",perimeter);
}