//  Write a C program to find power of any number x ^ y
#include<stdio.h>
int main(){
    int base , exponent , result;
    printf("Enter base(x) : ");
    scanf("%d",&base);

    printf("Enter exponent(y) : ");
    scanf("%d",&exponent);
    result= base;
    for(int i=1;i<exponent;i++){
        result=result*base;
    }
    printf("%d^%d is = %d ",base,exponent,result);

    
}