// - Write a C program that accepts an employee 's ID, total worked hours of a month and the amount he received per hour. Print the employee' s ID and salary(with two decimal places)of a particular month
#include<stdio.h>
int main(){
    int e_id,work_hours;
    float salary, hour_salary;
    printf("Enter Employee Id : ");
    scanf("%d",&e_id);

    printf("Enter working Hours of a month : ");
    scanf("%d",&work_hours);

    printf("Enter salary amount/hr : ");
    scanf("%f",&hour_salary);

    salary = work_hours*hour_salary;

    printf("\nEmployee ID: %d\n", e_id);
    printf("Salary: $%.2f\n", salary);
}