// Write a C program to print all Perfect numbers between 1 to n/
#include <stdio.h>
    int
    main()
{
    int number, sum = 0, temp;
    printf("Enter Number : ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("Perfect number is : %d\n", i);
        }
    }
}