//Convert days into months
#include<stdio.h>
void main()
{
	float days,months; //data members

	printf("CONVERT DAYS INTO MONTHS\n\n");

	printf("Enter Days: "); //User Input - Days
	scanf("%f",&days);

	months=days/30; //Converting Days into Months

	printf("\n%.2f Days = %.2f Months\n",days,months);
}