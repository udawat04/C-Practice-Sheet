// Write a C program to print multiplication table of any number
#include<stdio.h>
int main(){
    int n,table;
    printf("Enter number which you want of multiplication table : ");
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        table =n*i;
        printf("%d x %d = %d\n",n,i,table);
        i++;
    }
}