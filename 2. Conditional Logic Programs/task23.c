// Accept month number and display month name
#include <stdio.h>
void main()
{
	int month; //data member

	printf("READ MONTH NUMBER AND DISPLAY MONTH NAME\n\n");

	printf("Enter Month Number: "); //User Input - Month
	scanf("%d",&month);

	switch(month)
	{
	case 1:
		printf("\nJanuary\n");
		break;
	case 2:
		printf("\nFebruary\n");
		break;
	case 3:
		printf("\nMarch\n");
		break;
	case 4:
		printf("\nApril\n");
		break;
	case 5:
		printf("\nMay\n");
		break;
	case 6:
		printf("\nJune\n");
		break;
	case 7:
		printf("\nJuly\n");
		break;
	case 8:
		printf("\nAugust\n");
		break;
	case 9:
		printf("\nSeptember\n");
		break;
	case 10:
		printf("\nOctober\n");
		break;
	case 11:
		printf("\nNovember\n");
		break;
	case 12:
		printf("\nDecember\n");
		break;
	default:
		printf("\nInvalid Number\n");
	}
}