// Write a program in C to read any Month Number in integer and display the number of days for this month.
#include <stdio.h>
void main()
{
	int month; //data member

	printf("READ MONTH NUMBER AND DISPLAY THE NUMBER OF DAYS FOR THIS MONTH\n\n");

	printf("Enter Month Number: "); //User Input - Month
	scanf("%d",&month);

	switch(month)
	{
	case 1:
		printf("\nJanuary - 31 Days\n");
		break;
	case 2:
		printf("\nFebruary - 28/29 Days\n");
		break;
	case 3:
		printf("\nMarch - 31 Days\n");
		break;
	case 4:
		printf("\nApril - 30 Days\n");
		break;
	case 5:
		printf("\nMay - 31 Days\n");
		break;
	case 6:
		printf("\nJune - 30 Days\n");
		break;
	case 7:
		printf("\nJuly - 31 Days\n");
		break;
	case 8:
		printf("\nAugust - 31 Days\n");
		break;
	case 9:
		printf("\nSeptember - 30 Days\n");
		break;
	case 10:
		printf("\nOctober - 31 Days\n");
		break;
	case 11:
		printf("\nNovember - 30 Days\n");
		break;
	case 12:
		printf("\nDecember - 31 Days\n");
		break;
	default:
		printf("\nInvalid Number\n");
	}
}