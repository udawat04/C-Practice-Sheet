// Write a C program to print all Armstrong numbers between 1 to n
#include <stdio.h>
    int
    main()
{
    int number, armstrong = 0, temp;
    printf("Enter Number : ");
    scanf("%d", &number);
    // temp = number;

    for (int i = 1; i <= number; i++)
    {
        temp = i;
        armstrong = 0;
        while (temp > 0)
        {
            int digit = temp % 10;

            armstrong = armstrong + digit * digit * digit;

            temp = temp / 10;
        }

        if (armstrong == i)
        {
            printf("\n%d is = %d so it is armstrong number :-", i, armstrong);
        }
    }
}