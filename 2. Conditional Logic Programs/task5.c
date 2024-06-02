//Check Number Is Positive or Negative
#include <stdio.h>
void main()
{
	int n1; //data member

	printf("CHECK WHETHER NUMBER IS POSITIVE OR NEGATIVE\n\n");

	printf("Enter Number: "); //User Input - Number 1
	scanf("%d",&n1);

	if(n1>=0) //Checking whether number is positive or negative
	{
		printf("\n%d is Positive.\n",n1);
	}
	else
	{
		printf("\n%d is Negative.\n",n1);
	}
}