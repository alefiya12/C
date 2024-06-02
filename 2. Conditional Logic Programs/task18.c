// Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>
void main()
{
	float costPrice,sellPrice,profit,loss; //data members

	printf("CALCULATING PROFIT & LOSS ON A TRANSACTION\n\n");

	printf("Enter the Cost Price: $"); //User Input - Cost Price
    scanf("%f", &costPrice);
    printf("Enter the Sell Price: $"); //User Input - Sell Price
    scanf("%f", &sellPrice);

    if(costPrice<sellPrice) //Profit
    {
    	profit=sellPrice-costPrice; //Calculating Profit
    	printf("\nProfit: $%.2f\n", profit);
    }
    else if(costPrice>sellPrice) //Loss
    {
    	loss=costPrice-sellPrice; //Calculating Loss
    	printf("\nLoss: $%.2f\n", loss);
    }
    else //Neither Profit Nor Loss
    {
    	printf("\nNo profit, no loss.\n");
    }
}