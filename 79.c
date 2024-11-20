// Write a C program to check whether a number is Perfect number or not.

#include <stdio.h>
int main()
{
    int number, sum = 0, temp;
    printf("Enter Number : ");
    scanf("%d", &number);
    temp = number;

    for (int i = 1; i < temp; i++)
    {

        if (temp % i == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum is = %d\n", sum);
    if (sum == number)
    {
        printf("The number %d is a perfect number :-", number);
    }
    else if (sum < number)
    {
        printf("The number %d is a deficient number :-", number);
    }
    else if (sum > number)
    {
        printf("The number %d is a abundant number :-", number);
    }
}