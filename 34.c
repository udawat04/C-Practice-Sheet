// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle
// In this we check which triangle is by entering side and also check that we enter side follows triangle ineuality theorem or not

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter Side 1 : ");
    scanf("%d", &side1);
    printf("Enter Side 2 : ");
    scanf("%d", &side2);
    printf("Enter Side 3 : ");
    scanf("%d", &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
    {
        if (side1 == side2 && side1 == side3)
        {
            printf("Triangle is equilateral Triangle : ");
        }
        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            printf("Triangle is Isosceles Triangle ");
        }
        else if (side1 != side2 && side2 != side3 && side3 != side1)
        {
            printf("Triangle is Scalene Triangle ");
        }
    }
    else
    {
        printf("The Enter Side do not form valid traingle ");
    }
}