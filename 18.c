// Write a C program to enter P, T, R and calculate Compound Interest
//Using pow function of math.h header file 
#include<stdio.h>
#include <math.h>
int main(){
   double P,T,R,Compund_Interest;
    double Amount;

    printf("Enter Principal Amount : ");
    scanf("%lf",&P);

    printf("Enter Rate of Interest : ");
    scanf("%lf",&R);

    printf("Enter Time in Year : ");
    scanf("%lf",&T);

    Amount = P*((pow((1+R/100),T)));
    
    Compund_Interest = Amount - P;
    printf("Compund Interest is = %.2lf",Compund_Interest);

}