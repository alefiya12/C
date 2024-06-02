//Find Area of Square formula : a = a2
#include<stdio.h>
void main()
{
	float side,area; //data members

	printf("AREA OF SQUARE\n\n");

	printf("Enter Side(cm): "); //User Input - Side of Square 
	scanf("%f",&side);

	area=side*side; //a=side^2 - Area of Square
	printf("\nArea of Square: %.2f cm^2\n",area);
}