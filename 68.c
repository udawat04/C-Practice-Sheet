// Write a C program to find power of a number using for loop

#include <stdio.h>

int main()
{
    int number, power, result = 1;
    printf("Enter Number : ");
    scanf("%d", &number);
    printf("Enter Power : ");
    scanf("%d", &power);

    for (int i = 1; i <= power; i++)
    {
        result = number * result;
    }
    printf("%d^%d = %d", number, power, result);
}