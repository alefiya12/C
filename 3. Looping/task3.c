//WAP to take 10 no. Input from user find out below values
// a. How many Even numbers are there
// b. How many odd numbers are there
// c. Sum of even numbers
// d. Sum of odd numbers
#include <stdio.h>
void main()
{
	int n[10],even=0,odd=0,even_sum=0,odd_sum=0,i; //data members

	printf("FINDING EVEN, ODD, SUM OF EVEN & SUM OF ODD NUMBERS\n\n");

	for(i=0;i<10;i++) //User Input - 10 Numbers
	{
		printf("Enter n[%d]: ",i);
		scanf("%d",&n[i]);
	}

	for(i=0;i<10;i++)
	{
		if(i%2==0) 
		{
			even_sum=even_sum+n[i]; //Sum of Even Numbers
			even++; //Count of Even Numbers
		}
		else
		{
			odd_sum=odd_sum+n[i]; //Sum of Odd Numbers
			odd++; //Count of Odd Numbers
		}
	}

	printf("\nEven Numbers: %d\n",even);
	printf("Odd Numbers: %d\n",odd);
	printf("Sum of Even Numbers: %d\n",even_sum);
	printf("Sum of Odd Numbers: %d\n",odd_sum);
}