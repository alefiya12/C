//Convert temperature Fahrenheit to Celsius
#include<stdio.h>
void main()
{
	float farenheit,celcius; //data members

	printf("CONVERT TEMPRETURE FARENHEIT TO CELCIUS\n\n");

	printf("Enter Temperature in Farenheit: "); //User Input - Farenheit
	scanf("%f",&farenheit);

	celcius=(farenheit-32)*5/9; //Converting Fahrenheit to Celsius

	printf("\n%.2f Farenheit = %.2f Celcius\n",farenheit,celcius);
}