// Write a C program to print all alphabets from a to z. - using while loop


#include <stdio.h>

int main()
{
   
 char ch = 'A';
    while (ch <= 'Z')
    {
        printf("%c ", ch);
        ch++;
    }
}