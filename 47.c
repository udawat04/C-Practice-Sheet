// Write a C program to create Simple Calculator using switch case
#include <stdio.h>
int addition(int a, int b)
{
    int add = a + b;
    printf("Addition of %d + %d = %d", a, b, add);
    return add;
}
int subtraction(int a, int b)
{
    int sub = a - b;
    printf("Subtraction of %d - %d = %d", a, b, sub);
    return sub;
}
int multiply(int a, int b)
{
    int mul = a * b;
    printf("Multiply of %d * %d = %d", a, b, mul);
    return mul;
}
int division(int a, int b)
{
    if (b != 0)
    {
        int div = a / b;
        printf("division of %d / %d = %d", a, b, div);
        return div;
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}
int main()
{
    int a, b, n;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Select : \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division : ");
    printf("Enter what you want to perform : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        addition(a, b);
        break;

    case 2:
        subtraction(a, b);
        break;

    case 3:
        multiply(a, b);
        break;

    case 4:
        division(a, b);
        break;

    default:
        printf("invalid\nplease select correct option");
        break;
    }
}