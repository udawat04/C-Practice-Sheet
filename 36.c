// Write a C program to calculate profit or loss
// S_P = selling price  || C_P = cost price

#include <stdio.h>

int main()
{
    int profit, loss, S_P, C_P;
    printf("Enter Selling Price : ");
    scanf("%d", &S_P);

    printf("Enter Cost Price : ");
    scanf("%d", &C_P);

    if(S_P>C_P)
    {
    profit = S_P - C_P;
    printf("Profit is = %d \n",profit);
    }
    else if (C_P>S_P)
    {
    loss = C_P - S_P;
    printf("Loss is = %d \n",loss);      
    }
    else{
        printf("No Profit & No Loss because \nSelling price = Cost price");
    }
    


}