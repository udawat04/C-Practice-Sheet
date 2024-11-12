// Write a C program to check whether a number is even or odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%2==0){
        printf("The number %d is even",num);
    }
    else{
        printf("The number %d is odd",num);
    }
}