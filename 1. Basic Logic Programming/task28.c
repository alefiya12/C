//Convert years into days and months
#include<stdio.h>
void main()
{
	float years,days,months; //data members

	printf("CONVERT YEARS INTO DAYS AND MONTHS\n\n");

	printf("Enter Years: "); //User Input - Years
	scanf("%f",&years);

	months=years*12; //Converting Years into Months
	days=years*365; //Converting Years into Days

	printf("\n%.2f Years = %.2f Months\n",years,months);
	printf("%.2f Years = %.2f Days\n",years,days);
}