// Write a C program to calculate product of digits of a number

#include <stdio.h>
int main()
{
    int number, digit, mul = 1, count = 0;
    printf("Enter Number : ");
    scanf("%d", &number);

    if (number == 0)
    {
        mul = 0;
        count = count + 1;
    }
    else if (number < 0)
    {
        number = -number;
    }

    while (number != 0)
    {

        digit = number % 10;
        mul = mul * digit;
        number = number / 10;
        count++;
    }
    printf("No. of digits is : %d\n", count);
    printf("Multiply of digit is : %d", mul);
}