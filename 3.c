// Write a C program to enter two numbers and perform all arithmetic operations.
#include<stdio.h>
int main(){
    int a,b;
    int add , sub , multiply,mod;
    float divide;

    printf("enter first number :- ");
    scanf("%d",&a);

    printf("enter second number :- ");
    scanf("%d",&b);

    printf("*******************************************************************\n");
    printf("\t\tADD\n");
    add = a+b;
    printf("Addition of both numbers :- %d",add);

    printf("\n*******************************************************************");
    printf("\n\t\tSUB");
    sub = a-b;
    printf("\nSubtraction of both number :- %d",sub);

    printf("\n*******************************************************************");
    printf("\n\t\tMULTIPLY");
    multiply = a*b;
    printf("\nMultiplication of both number :- %d",multiply);

    printf("\n*******************************************************************");
    printf("\n\t\tDIVIDE");
    divide = a/b;
    printf("\nDivision of both number :- %.2f",divide);

    printf("\n*******************************************************************");
    printf("\n\t\tMOD");
    mod = a%b;
    printf("\nMod of both number :- %d",mod);
    printf("\n*******************************************************************");
}