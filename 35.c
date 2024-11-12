// Write a C program to find all roots of a quadratic equation
// To check roots when
// discriminate>0 then enter values of a , b and c = 1 ,3, -4
// discriminate==0 then enter values of a , b and c = 1 ,-6, 9
// discriminate<0 then enter values of a , b and c = 1 ,2,5

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, discriminate;
    double root1, root2, realroot, imaginaryroot;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);
    discriminate = b * b - 4 * a * c;

    if (discriminate > 0)
    {

        root1 = (-b + sqrt(discriminate)) / 2 * a;
        root2 = (-b - sqrt(discriminate)) / 2 * a;

        printf("Roots are real and distinct : \n");
        printf("Root 1 is : %.2lf \n", root1);
        printf("Root 2 is : %.2lf \n", root2);
    }
    else if (discriminate == 0)
    {
        root1 = ((-b) / (2 * a));
        printf("Roots are real and equal : \n");
        printf("Root 1 is : %.2lf \n", root1);
    }
    else
    {
        realroot = ((-b) / (2 * a));
        imaginaryroot = sqrt(-discriminate) / (2 * a);
        printf("Roots are complex \n");
        printf("Root 1 = %.2lf + %.2lfi\n", realroot, imaginaryroot);
        printf("Root 2 = %.2lf - %.2lfi\n", realroot, imaginaryroot);
    }
}
