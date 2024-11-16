// Write a C program to print all ASCII character with their values

#include<stdio.h>
int main(){
    char ch;
    printf("Ascii Value of Upper Case :\n");
    for(ch='A';ch<='Z';ch++){
       
        printf("%c = %d ", ch, ch);
    }
    printf("\nAscii Value of Lower Case : \n");
    for(ch='a';ch<='z';ch++){
      
        printf("%c = %d ",ch,ch);
    }
}