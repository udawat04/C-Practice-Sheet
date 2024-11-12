// Write a C program to input angles of a triangle and check whether triangle is valid or not
#include<stdio.h>

int main(){
    int angle1,angle2,angle3 ,result;

printf("Enter First Angle : ");
scanf("%d",&angle1);

printf("Enter Second Angle : ");
scanf("%d",&angle2);

printf("Enter Third Angle : ");
scanf("%d",&angle3);

result = angle1+angle2+angle3;
if(result==180){
    printf("This is a Triangle as all angle sum is = 180 degree");
}
else{
    printf("Not a Triangle as all angle sum not = 180 degree");
}

}