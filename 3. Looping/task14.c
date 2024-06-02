//Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>
void fact(int n)
{
	int i;
	long fact=1; //data members
	for (i=1;i<=n;i++) //Calculating factorial
	{
		fact*=i;
	}
	printf("Factorial of %d is: %ld\n\n",n,fact);
}
void main()
{
	int n,i; //data members

	printf("CALCULATING FACTORIAL OF 5 NUMBER\n\n");

	for (i=1;i<=5;i++) //User Input - 5 Numbers
	{
		printf("Number %d: ",i);
		scanf("%d",&n);
		fact(n);
	}
}