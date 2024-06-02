//Write a C Program to Print the Multiplication Table of N i. E.g. 5 * 1 = 5
#include <stdio.h>
void main()
{
	int i,n; //data members

	printf("PRINTING TABLE OF A NUMBER\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

	printf("\nTable of %d\n",n);
	for(i=1;i<=10;i++) // Calculating Table of the Number
	{
		printf("%d x %d = %d\n",n,i,i*n);
	}
}