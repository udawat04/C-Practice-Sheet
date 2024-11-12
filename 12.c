// Write a C program to enter any number and calculate its square root.

#include<stdio.h>
#include<math.h>
int main(){
    int num;
    float root;

    printf("Enter any number which square root you want : ");
    scanf("%d",&num);

    root = sqrt(num);

    printf("Square root of %d is = %.3f",num,root);
}