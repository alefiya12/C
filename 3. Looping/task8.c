//Write a program to find out the max from given number
//(E.g., No: -1562 Max number is 6)
#include <stdio.h>
void main()
{
	int n,remainder,a[10],i=0,max=0,j; //data members

	printf("FINDING MAXIMUM NUMBER FROM A NUMBER\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

	printf("\nOriginal Number: %d\n",n);

	if(n<0)
	{
		n=-n;
	}
	
	while(n!=0)
	{
		remainder=n%10; //Get the last digit
		if(remainder>max)
		{
			max=remainder; //Update max if the current digit is greater
		}
		n=n/10; //Remove the last digit
		i++;
	}

	printf("Max Number: %d\n",max);
}