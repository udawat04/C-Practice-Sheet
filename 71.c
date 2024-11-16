#include <stdio.h>

int main()
{
  int num1, num2, remainder;

  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);

 
  if (num1 < num2)
  {
    int temp = num1;
    num1 = num2;
    num2 = temp;
  }

  while (num2 != 0)
  {
    remainder = num1 % num2;
    num1 = num2;
    num2 = remainder;
  }

  printf("HCF is: %d\n", num1);

  return 0;
}
