// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25 %, DA = 90 % 
//Basic Salary > 20000 : HRA = 30 %, DA = 95 %

#include<stdio.h>
int main(){
    int basic_salary,gross_salary;
    float HRA, DA;
     printf("Enter Basic Salary of an Employee : ");
    scanf("%d",&basic_salary);
    if(basic_salary<=10000){
        HRA = ((float)20/100);
        DA = ((float)80/100);
        gross_salary = HRA*basic_salary+DA*basic_salary+basic_salary;
        printf("The Total Gross Salary = %d Rs. \nWhen basic salary is %d with 20%% HRA and 80%% DA ", gross_salary, basic_salary);
    }
    else if (basic_salary<=20000)
    {
        HRA = ((float)25/100);
        DA = ((float)90/100);
        gross_salary = basic_salary*HRA+basic_salary*DA+basic_salary;
        printf("The Total Gross Salary = %d Rs. \nWhen basic salary is %d with 25%% HRA and 90%% DA ", gross_salary, basic_salary);
    }
    else if (basic_salary>20000)
    {
        HRA = ((float)30/100);
        DA = ((float)95/100);
        gross_salary = basic_salary*HRA+basic_salary*DA+basic_salary;
        printf("The Total Gross Salary = %d Rs. \nWhen basic salary is %d with 30%% HRA and 95%% DA ", gross_salary, basic_salary);
    }
    

}