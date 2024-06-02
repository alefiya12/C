//WAP to check whether a number is negative, positive or zero.
#include <stdio.h>
void main()
{
	int n1; //data members

	printf("CHECK WHETHER NUMBER IS POSITIVE NEGATIVE OR ZERO\n\n");

	printf("Enter Number: "); //User Input - Number 1
	scanf("%d",&n1);

	if(n1>0) //Check if Number is Positive (Greater than Zero)
	{
		printf("\n%d is Positive.\n",n1);
	}
	else if(n1<0) //Check if Number is Negative (Less than Zero)
	{
		printf("\n%d is Negative.\n",n1);
	}
	else //If Number is neither Positive nor Negative than it is Zero
	{
		printf("\n%d is Zero.\n",n1);
	}
}