// Write a C program to find first and last digit of a number
#include <stdio.h>

int main()
{
    int number, lastdigit, firstdigit;

    // Input the number
    printf("Enter Number: ");
    scanf("%d", &number);

    // Calculate the last digit
    lastdigit = number % 10;

    // Loop to find the first digit
    firstdigit = number; 
    while (firstdigit >= 10){

        firstdigit = firstdigit / 10;
    }

    printf("First digit is: %d\n", firstdigit);
    printf("Last digit is: %d\n", lastdigit);

    return 0;
}
