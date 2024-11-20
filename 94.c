// - Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers.Display a message if it is not possible to find the roots
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x, y, pr1;
    printf("Enter vlaue of a : ");
    scanf("%f", &a);
    printf("Enter vlaue of b : ");
    scanf("%f", &b);
    printf("Enter vlaue of c : ");
    scanf("%f", &c);

    pr1 = (b * b) - (4 * (a) * (c));

    if (a != 0)
    {
        x = (-b + sqrt(pr1)) / (2 * a);
        y = (-b - sqrt(pr1)) / (2 * a);

        printf("Root1 = %.5lf\n", x); // Print first root
        printf("Root2 = %.5lf\n", y); // Print second root
    }
}