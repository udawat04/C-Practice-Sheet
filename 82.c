// Write a C program to print all Strong numbers between 1 to n
#include <stdio.h>
    int
    main()
{
    int number, sum = 0, temp, original_number;
    printf("Enter Number : ");
    scanf("%d", &number);
    original_number = number;

    for (int i = 1; i < number; i++)
    {
        temp = i;
        sum = 0;
        while (temp != 0)
        {
            int digit = temp % 10;
            temp = temp / 10;

            int fact = 1;
            for (int j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }
            sum = sum + fact;
        }

        if (sum == i)
        {
            printf("%d is strong number :\n ", i);
        }
    }
}