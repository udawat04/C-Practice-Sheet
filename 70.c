// Write a C program to calculate factorial of a number
#include<stdio.h>
int main(){
    int number;
    long long factorial=1;
    printf("Enter Number : ");
    scanf("%d",&number);

    for(int i=1;i<=number;i++){
        factorial=factorial*i;
        
    }
    printf("Factorial of %d is : %lld\n",number,factorial);
}