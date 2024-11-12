// Write a C program to enter P, T, R and calculate Simple Interest
#include<stdio.h>
int main(){
    int P,T,R,Simple_Interest;
    printf("Enter Principle Amount : ");
    scanf("%d",&P);

    printf("Enter Rate of Interest : ");
    scanf("%d",&R);

    printf("Enter Time : ");
    scanf("%d",&T);

    Simple_Interest = (P*R*T)/100;
    printf("Simple Interest is = %d",Simple_Interest);
}