// Write a C program to check whether a number is positive, negative or zero using switch case
// number>0 check condition and if it is true return 1 and if it false then return 0
//when enter 5 then it check 5>0 return 1 because it true and 5<0 return 0 because it is false 
// now 5>0 - 5<0 = 1-0 =1

#include<stdio.h>
int main(){
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);

    switch ((number > 0) - (number < 0))
    {
    case 0:
        printf("%d number is zero",number);
        break;
    case 1:
        printf("%d number is positive",number);
        break;
    case -1:
        printf("%d number is negative",number);
        break;

   
   }
   
}