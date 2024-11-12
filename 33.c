// Write a C program to input all sides of a triangle and check whether triangle is valid or not
// In this we need to valid triangle by checking its side
// we us triangle inequilateral triangle theorem

#include<stdio.h>

int main(){
    int side1,side2,side3 ;

    printf("Enter First Side : ");
    scanf("%d",&side1);

    printf("Enter Second Side : ");
    scanf("%d",&side2);

    printf("Enter Third Side : ");
    scanf("%d",&side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("The Triangle is valid ");
    }
    else
    {
        printf("The Tirangle id not valid ");
    }
}