//WAP to convert years into days and days into years
#include<stdio.h>
void main()
{
	float years,days,y,d; //data members

	printf("CONVERT YEARS INTO DAYS & DAYS INTO YEARS\n\n");

	printf("Enter Years: "); //User Input - Years
	scanf("%f",&years);

	d=years*365; //Converting Years into Days

	printf("%.2f Years = %.2f Days\n",years,d);

	printf("\nEnter Days: "); //User Input - Years
	scanf("%f",&days);

	y=days/365; //Converting Days into Years

	printf("%.2f Days = %.2f Years\n",days,y);
}