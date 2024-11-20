// Write a C program to print Fibonacci series up to n terms
#include <stdio.h>
int main()
{
    int number, temp,  f0 = 0, f1 = 1;
    printf("Enter Number : ");
    scanf("%d", &number);
    printf("the fibonacci series of %d is :", number);
    printf("%d %d ", f0, f1);

    for (int i = 2; i <= number; i++)
    {
        temp = f0 + f1;
        printf("%d ", temp);
        f0 = f1;
        f1 = temp;
    }
}