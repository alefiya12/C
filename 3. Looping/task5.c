//WAP to print factorial of given number
#include <stdio.h>
void main()
{
	int n,i,fact=1; //data members

	printf("CALCULATING FACTORIAL OF A NUMBER\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

	for(i=1;i<=n;i++) //Calculating Factorial
	{
		fact=fact*i;
	}

	printf("\nFactorial of %d is: %d\n",n,fact);
}