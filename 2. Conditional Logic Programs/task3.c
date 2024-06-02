//WAP to check if the given year is a leap year or not.
#include <stdio.h>
void main()
{
	int year; //data member

	printf("CHECKING YEAR IS LEAP YEAR OR NOT\n\n");

	printf("Enter Year: "); // User Input - Year
	scanf("%d",&year);

	if(year%4==0) //Checking if given year is leap year or not
	{
		printf("\n%d is a Leap Year\n",year);
	}
	else
	{
		printf("\n%d is Not a Leap Year\n",year);
	}
}