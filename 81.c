// Write a C program to check whether a number is Strong number or not
#include <stdio.h>
int main()
{
    int number, sum = 0, temp;
    printf("Enter Number : ");
    scanf("%d", &number);
    temp = number;

    while (number != 0)
    {
        int digit = number % 10;
        number = number / 10;
        int fact = 1;
        for (int j = 1; j <= digit; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
    }

    if (sum == temp)
    {
        printf("%d is strong number : ", temp);
    }
    else
    {
        printf("%d is not a strong number : ", temp);
    }
}