// Write a C program to calculate the distance between the two points.
#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    float d;
    printf("Enter Values of x1 and x2 : ");
    scanf("%d %d", &x1, &x2);

    printf("Enter Values of y1 and y2 : ");
    scanf("%d %d", &y1, &y2);

    d = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
    printf("Distance : %f", d);
}