//Convert minutes into seconds and hours
#include<stdio.h>
void main()
{
	float min,hours=0,sec=0; //data members

	printf("CONVERT MINUTES INTO HOURS AND SECONDS\n\n");

	printf("Enter Minutes: "); //User Input - Minutes
	scanf("%f",&min);

	hours=min/60; //Converting Minutes into Hours
	sec=min*60; //Converting Minutes into Seconds

	printf("\n%.2f Minutes = %.2f Hour\n",min,hours);
	printf("%.2f Minutes = %.2f Seconds\n",min,sec);
}