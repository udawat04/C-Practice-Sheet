#include <stdio.h>
int main()
{
    int p, q, r, s;
    printf("Enter values : ");
    printf("p : ");
    scanf("%d", &p);
    printf("q : ");
    scanf("%d", &q);
    printf("r : ");
    scanf("%d", &r);
    printf("s : ");
    scanf("%d", &s);

    if (q > 0 && r > 0 && s > 0 && p % 2 == 0 && q > r && s > p && (r + s) > (p + q))
    {

        printf("Correct value");
    }
    else
    {
        printf("Wrong values");
    }
}