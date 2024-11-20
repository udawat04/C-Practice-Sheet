// Write a C program to check whether a number is Armstrong number or not
#include <stdio.h>
int main()
{
    int number, armstrong = 0, temp;
    printf("Enter Number : ");
    scanf("%d", &number);
    temp = number;

    while (temp > 0)
    {
        int digit = temp % 10;
        armstrong = armstrong + digit * digit * digit;
        temp = temp / 10;
    }
    if (armstrong == number)
    {
        printf("%d is = %d so it is armstrong number :-", number, armstrong);
    }
    else
    {
        printf("%d is not a armstrong number ", number);
    }
}