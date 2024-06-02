//Accept 5 expense from user and find average of expense
#include<stdio.h>
void main()
{
	int exp1,exp2,exp3,exp4,exp5; //data members
	float total_exp,avg_exp; //data members

	printf("CALCULATING AVERAGE EXPENSE OF 5 EXPENSES\n\n");

	printf("Enter Expense 1: "); //User Input - Expense 1
	scanf("%d",&exp1);

	printf("Enter Expense 2: "); //User Input - Expense 2
	scanf("%d",&exp2);

	printf("Enter Expense 3: "); //User Input - Expense 3
	scanf("%d",&exp3);

	printf("Enter Expense 4: "); //User Input - Expense 4
	scanf("%d",&exp4);

	printf("Enter Expense 5: "); //User Input - Expense 5
	scanf("%d",&exp5);

	total_exp=exp1+exp2+exp3+exp4+exp5; //Calculating Total Expense
	avg_exp=total_exp/5; //Calculating Average Expense

	printf("\nTotal Expense: %.2f\n",total_exp);
	printf("Average Expense: %.2f\n",avg_exp);
}