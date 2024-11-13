// Write a C program to find roots of a quadratic equation using switch case
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    double discriminate, root1, root2, real, imaginary;
    printf("Enter the value of a ,b and c : ");
    scanf("%d%d%d", &a, &b, &c);

    discriminate = (pow(b, 2) - (4 * a * c));

    switch ((discriminate > 0) - (discriminate < 0))
    {
    case 0:
        printf("The root has only one real root :");
        root1 = -b / (2.0 * a);
        printf("root1 = %.2lf", root1);
        break;
    case 1:
        printf("There are two different real root :");
        root1 = (-b + sqrt(discriminate) / (2 * a));
        root2 = (-b - sqrt(discriminate) / (2 * a));
        printf("root1 = %.2lf", root1);
        printf("root2 = %.2lf", root2);
        break;
    case -1:
        printf("There are two different complex root :");
        real = -b / (2.0 * a);
        imaginary = sqrt(-discriminate) / (2 * a);
        printf("\nroot1 = %.2lf + %.2lfi", real, imaginary);
        printf("\nroot2 = %.2lf - %.2lfi", real, imaginary);
        break;

    default:
        break;
    }
}