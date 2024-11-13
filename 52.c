// Write a C program to print all odd number between 1 to 100
#include<stdio.h>
int main(){
    int i=1;
    printf("Odd Number from 1 to 100");
    while(i<=100)
    {
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
}