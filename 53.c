// Write a C program to find sum of all natural numbers between 1 to n
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number : ");
    scanf("%d",&n);

    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("Sum of All Natural Number : %d",sum);
}