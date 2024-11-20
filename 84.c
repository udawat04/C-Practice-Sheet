// Write a C program that accepts two item’s weight(floating points ' values ) and number of purchase (floating points' values) and calculate the average value of the items.
#include<stdio.h>
int main(){
    float weight_i1,weight_i2,item1,item2,avg;
    printf("Enter Weight of Item 1 : ");
    scanf("%f",&weight_i1);
    printf("Enter no. of item 1 : ");
    scanf("%f",&item1);

    printf("Enter Weight of Item 2 : ");
    scanf("%f",&weight_i2);
    printf("Enter no. of Item 2 : ");
    scanf("%f",&item2);

    int i1 = weight_i1*item1;
    int i2 = weight_i2*item2;
   

    avg = (i1+i2)/(item1+item2);
    printf("Average is = %.2f ",avg);

}