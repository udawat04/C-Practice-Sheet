// Write a C program to count number of digits in a number
#include<stdio.h>
int main(){
    int value,count=0;
    printf("Enter number : ");
    scanf("%d",&value);

    while(value!=0){
        value = value/10;
        count = count+1;
        // printf("%d after 1\n", value);
    }
         printf("no. of digit : %d \n", count);

}