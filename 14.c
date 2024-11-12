// Write a C program to enter base and height of a triangle and find its area
#include<stdio.h>
int main(){
    int base , height ,area;
     printf("Enter base and height of Triangle : ");
     scanf("%d%d",&base,&height);

     area = (base*height)/2;
     printf("Area of Triangle is = %d",area);
}