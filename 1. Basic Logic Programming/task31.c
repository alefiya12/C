//Convert kilometers into meters
#include<stdio.h>
void main()
{
	float kilometers,meters; //data members

	printf("CONVERT KILOMETRERS TO METERS\n\n");

	printf("Enter Distance in Kilometers: "); //User Input - Distance in Kilometers
	scanf("%f",&kilometers);

	meters=kilometers*1000; //Converting kilometers into meters

	printf("\n%.2f Kilometers = %.2f Meters\n",kilometers,meters);
}