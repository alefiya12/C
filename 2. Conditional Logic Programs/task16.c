// Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
// Temp < 0 then Freezing weather 
// Temp 0-10 then Very Cold weather 
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp 
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot
#include <stdio.h>
void main()
{
	int temp; //data member

	printf("DISPLAYING SUITABLE MESSAGE ACCORDING TO TEMPERATURE\n\n");

	printf("Enter Temperature(centigrade): "); //User Input - Temperature
	scanf("%d",&temp);

	if(temp<0) //If Temperature is Less than 0
	{
		printf("\nFreezing Weather\n");
	}
	else if(temp>=0 && temp<=10) //If Temperature is Greater than 0 & Less than or equal to 10
	{
		printf("\nVery Cold Weather\n");
	}
	else if(temp>10 && temp<=20) //If Temperature is Greater than 10 & Less than or equal to 20
	{
		printf("\nCold Weather\n");
	}
	else if(temp>20 && temp<=30) //If Temperature is Greater than 20 & Less than or equal to 30
	{
		printf("\nNormal Weather\n");
	}
	else if(temp>30 && temp<=40) //If Temperature is Greater than 30 & Less than or equal to 40
	{
		printf("\nHot Weather\n");
	}
	else if(temp>40) //If Temperature is Greater than 40
	{
		printf("\nVery Hot Weather\n");
	}
}