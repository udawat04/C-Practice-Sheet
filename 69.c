// Write a C program to find all factors of a number
#include <stdio.h>
int main()
{
    int number, factor;
    printf("Enter Number : ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf(" %d", i);
        }
    }
}