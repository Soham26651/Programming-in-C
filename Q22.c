//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() 
{
    float costPrice, sellingPrice, profit, loss;
    float profitPercent, lossPercent;

    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) 
    {
        profit = sellingPrice - costPrice;
        profitPercent = (profit / costPrice) * 100;
        printf("Profit = %.2f%%\n", profitPercent);
    } 
    else if (costPrice > sellingPrice) 
    {
        loss = costPrice - sellingPrice;
        lossPercent = (loss / costPrice) * 100;
        printf("Loss = %.2f%%\n", lossPercent);
    } 
    else 
    {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
