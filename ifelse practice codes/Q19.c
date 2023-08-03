//Q19. Write a program in C to calculate and print the Electricity bill of a given customer. The customer id, and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charge are as follow : 
//Unit	Charge/unit
//upto 199	@1.20
//200 and above but less than 400	@1.50
//400 and above but less than 600	@1.80
//600 and above	@2.00
//If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

#include <stdio.h>

int main() 
{
    int customerID, unitsConsumed;
    float totalAmount,surchargeAmount;

    printf("Enter the customer ID: ");
    scanf("%d", &customerID);

    printf("Enter the units consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed <= 199) 
    {
        totalAmount = unitsConsumed * 1.20;
    } 
    else if (unitsConsumed >= 200 && unitsConsumed < 400) 
    {
        totalAmount = unitsConsumed * 1.50;
    } 
    else if (unitsConsumed >= 400 && unitsConsumed < 600) 
    {
        totalAmount = unitsConsumed * 1.80;
    } 
    else 
    {
        totalAmount = unitsConsumed * 2.00;
    }

    if (totalAmount > 400) 
    {
        totalAmount += totalAmount * 0.15;
        surchargeAmount = totalAmount*15/100;
        printf("Surcharge Amount = %.2f \n", surchargeAmount);
    }

    if (totalAmount < 100) 
    {
        totalAmount = 100;
    }

    printf("Customer ID: %d\n", customerID);
    printf("Units consumed: %d\n", unitsConsumed);
    printf("Total Amount to Pay: Rs. %.2f\n", totalAmount);
    return 0;
}
