// Write a C program to enter a number and print it in words
#include <stdio.h>

int word(int d)
{
    switch (d)
    {
    case 0:
        printf("zero ");
        break;
    case 1:
        printf("one ");
        break;
    case 2:
        printf("two ");
        break;
    case 3:
        printf("three ");
        break;
    case 4:
        printf("four ");
        break;
    case 5:
        printf("five ");
        break;
    case 6:
        printf("six ");
        break;
    case 7:
        printf("seven ");
        break;
    case 8:
        printf("eight ");
        break;
    case 9:
        printf("nine ");
        break;

    default:
        break;
    }
}

int main()
{
    int number, reverse = 0, digit;
    printf("Enter Number : ");
    scanf("%d", &number);

    if (number == 0)
    {
        word(0); 
        return 0;
    }

    while (number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    while (reverse != 0)
    {
        digit = reverse % 10;
        word(digit);
        reverse = reverse / 10;
    }
}