// WAP to input the week number and print week day.
#include <stdio.h>
void main()
{
	int week; //data member

	printf("READ WEEK NUMBER AND DISPLAY THE WEEK NAME\n\n");

	printf("Enter Week Number(0-6): "); //User Input - Week
	scanf("%d",&week);

	switch(week)
	{
	case 0:
		printf("\nSunday\n");
		break;
	case 1:
		printf("\nMonday\n");
		break;
	case 2:
		printf("\nTuesday\n");
		break;
	case 3:
		printf("\nWednesday\n");
		break;
	case 4:
		printf("\nThrusday\n");
		break;
	case 5:
		printf("\nFriday\n");
		break;
	case 6:
		printf("\nSaturday\n");
		break;
	default:
		printf("\nInvalid Number\n");
	}
}