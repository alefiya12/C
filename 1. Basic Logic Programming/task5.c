// Find Area of Cube formula : a = 6a2
#include<stdio.h>
void main()
{
	float side,area; //data members

	printf("AREA OF CUBE\n\n");

	printf("Enter Side(cm): "); //User Input - Side of Cube
	scanf("%f",&side);

	area=6*side*side; //a=6*side^2 - Area of Cube
	printf("\nArea of Cube: %.2f cm^2\n",area);
}