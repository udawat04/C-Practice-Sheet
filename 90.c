// - Write a C program to find all numbers which are dividing by 7 and the remainder is equal to 2 or 3 between two given integer numbers.

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter Starting Integer : ");
    scanf("%d",&num1);

    printf("Enter Ending Integer : ");
    scanf("%d",&num2);

    for(int i=num1;i<num2;i++){
        if(i%7==2 || i%7==3){
            printf("%d\n",i);
        }
    }
}