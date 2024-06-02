//Find character value from ascii
#include<stdio.h>
void main()
{
	int as; //data member

	printf("FINDIND CHARACTER VALUE FROM ASCII VALUE\n\n");

	printf("Enter ASCII Value(0-127): "); //User Input - ASCII(American Standard Code for Information Interchange) Value
	scanf("%d",&as);

	if (as >= 0 && as <= 127) //Checking Input for Range of ASCII Value
	{
		if(as<=32 || as==127) //Checking for Non-Printable Characters
		{
			printf("\nThe Character value of the %d is: Non-Printable Character\n",as);
		}
		else
		{
			printf("\nThe Character value of the %d is: %c\n",as,(char)as); //Printing Charcter value from ASCII Value
		}
	}
	else
	{
		printf("\nInvalid ASCII code. Please enter a value between 0 and 127.\n");
	}
}