//Write a C program to enter marks of five subjects and calculate total, average and percentage
#include<stdio.h>
int main(){
    int i ,n, total=0 , avg ;
    float percentage;
    printf("Enter total subject : ");
    scanf("%d",&n);
    int arr[n];

    // First loop for enter marks
    for(i=1;i<=n;i++){
        printf("Enter Marks of Subject %d : ",i);
        scanf("%d",&arr[i]);
        total =total+arr[i];
    }

    //Second loop for display marks
    for(i=1;i<=n;i++){
        printf("Subject %d : %d\n", i, arr[i]);
    }

    // display total marks
    printf("Total marks obtain = %d\n",total);

    avg = total/n;
    printf("Average of Marks : %d\n", avg);

    percentage = (total / (n * 100)) * 100;
    printf("Total percentage of obtained marks : %.2f",percentage);
   
}
