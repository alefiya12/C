//Calculate sum of 10 numbers using of while loop
#include <stdio.h>
void main()
{
	int i=1,n=0; //data members

	printf("CALCULATING SUM OF FIRST 10 NUMBER\n\n");

	while(i<=10) //condition
	{
		n=n+i;
		i++; //increment
	}

	printf("Sum of First 10 Numbers is: %d\n",n);
}