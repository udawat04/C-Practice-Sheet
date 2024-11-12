// Write a C program to enter two angles of a triangle and find the third angle
#include<stdio.h>
int main(){
    int angle1,angle2,angle3;
     printf("Enter angle1 and angle2 both simultaneously : ");
     scanf("%d%d",&angle1,&angle2);

     angle3 = 180-(angle1+angle2);
     printf("Angle 3 is : %d",angle3);
}