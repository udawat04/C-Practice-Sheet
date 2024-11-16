// Write a C program to find all prime factors of a number
#include <stdio.h>
int main()
{
    int n;
    int factor;
    printf("Enter Number : ");
    scanf("%d",&n);
    printf("factor of %d is : \n", n);
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            factor = i;
            printf("%d\n ", factor);
            n = n / i;
        }
    }
}