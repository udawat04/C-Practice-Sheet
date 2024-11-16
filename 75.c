#include <stdio.h>
int main()
{
    int number, count = 0, sum = 0;//sum is = 1 so that it include 1 every time ;

    printf("Enter Number : ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i++)
    {
        count = 0;
        for (int j = 2; j*j <= i; j++)
        {
          
            if (i % j == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            sum = sum + i;
            printf("prime number : %d\n", i);
        }
    }
    printf("\nSum is %d", sum);
}