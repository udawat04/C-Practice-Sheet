// Write a C program to check whether a number is Prime number or not
#include <stdio.h>

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

   

    // Loop to check divisibility from 2 to sqrt(number)
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            // If divisible, the number is not prime
            printf("%d is not a prime number as it is divisible by %d.\n", number, i);
            return 0;
        }
    }

    // If no divisors are found, the number is prime
    printf("%d is a prime number.\n", number);

    return 0;
}
