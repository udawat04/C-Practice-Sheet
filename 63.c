// Write a C program to enter a number and print its reverse.

#include <stdio.h>
int main()
{
  int number, original_number, digit, reverse = 0;
  printf("Enter Number : ");
  scanf("%d", &number);
  original_number = number;

  while (number != 0)
  {
    digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;
  }
  

  printf("Reverse of Number is : %d", reverse);
}
