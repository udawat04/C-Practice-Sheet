// Write a C program to find sum of all even numbers between 1 to n

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter number : ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}