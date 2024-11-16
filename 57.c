// Write a C program to count number of digits in a number
#include<stdio.h>
int main(){
    int value,count=0;
    printf("Enter number : ");
    scanf("%d",&value);
// this if condition is used to handle if user enter 0 or a negative value
    if (value == 0)
    {
        count = 1; // 0 has one digit
    }
    else
    {
        if (value < 0)
        {
            value = -value; // Make the number positive if it's negative
        }

        while (value != 0)
        {
            value = value / 10;
            count = count + 1;
            // printf("%d after 1\n", value);
        }
        printf("no. of digit : %d \n", count);
    }
}