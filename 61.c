// Write a C program to calculate sum of digits of a number
#include<stdio.h>
int main(){
    int number,digit,sum=0,count=0;
    printf("Enter Number : ");
    scanf("%d",&number);

    if(number==0){
       sum =0;
       count = count+1;

    }
    else if (number<0)
    {
      number = -number;
    }

    while (number!=0)
    {
     
       digit = number%10;
       sum = sum+digit;
       number=number/10;
       count++;
    }
    printf("No. of digits is : %d\n",count);
    printf("Sum of digit is : %d",sum);
    
}