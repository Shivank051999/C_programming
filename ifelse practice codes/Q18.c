//Q18. Write a C program to calculate profit and loss on a transaction. 

#include <stdio.h>

int main() 
{
    float costPrice, sellingPrice, profitOrLoss;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    profitOrLoss = sellingPrice - costPrice;
    
    if (profitOrLoss > 0) 
    {
        printf("Profit Amount: %.2f\n", profitOrLoss);
        printf("Profit Percentage: %.2f%%\n", (profitOrLoss / costPrice) * 100);
    } 
    else if (profitOrLoss < 0) 
    {
        printf("Loss Amount: %.2f\n", -profitOrLoss);
        printf("Loss Percentage: %.2f%%\n", (-profitOrLoss / costPrice) * 100);
    } 
    else 
    {
        printf("No profit or loss.\n");
    }
    return 0;
}
