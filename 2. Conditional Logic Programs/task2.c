//Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0
#include <stdio.h>
void main()
{
	int m,n; //data members

	printf("CHECKING WHETHER INTEGER IS GREATER THAN LESS THAN OR EQUAL TO 0\n\n");

	printf("Enter Number: "); //User Input - Number 
	scanf("%d",&m);

	if(m>0) //Checking if Number is Greater than 0
	{
		n=1;
		printf("\n%d is Greater than 0, n = %d\n",m,n);
	}
	else if(m==0) //Checking if Number is Equal to 0
	{
		n=0;
		printf("\n%d is Equal to 0, n = %d\n",m,n);
	}
	else if(m<0) //Checking if Number is Less than 0
	{
		n=-1;
		printf("\n%d is Less than 0, n = %d\n",m,n);
	}	
}