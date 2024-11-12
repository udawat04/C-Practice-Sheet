// 1. Write a C program to perform input/output of all basic data types.
#include<stdio.h>
int main(){
int age;
float percent;
char alphabet;


printf("enter age: ");
scanf("%d",&age);

printf("enter percentage: ");
scanf("%f",&percent);

printf("enter alphabet: ");
scanf(" %c", &alphabet);

printf("\n You Entered :- \n");
printf("Age = %d \n",age);
printf("Percentage = %.2f\n",percent);
printf("Alphabet = %c",alphabet);



}