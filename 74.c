// Write a C program to print all Prime numbers between 1 to n
#include <stdio.h>
int main()
{
    int number, count = 0;
    printf("Enter Number : ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i++)
    {
        count = 0;
        for (int j = 2;j* j <= i; j++)
        {
          
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("prime number : %d\n", i);
        }
    }
}