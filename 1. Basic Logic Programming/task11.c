// Find circumference of square formula : C = 4 * a
#include<stdio.h>
void main()
{
	float side,circumference; //data members

	printf("CIRCUMFERENCE OF SQUARE\n\n");

	printf("Enter Side(cm): "); //User Input - Side of Square
	scanf("%f",&side);

	circumference=4*side; //c=4*side - Circumference of Square
	printf("\nCircumference of Square: %.2f cm\n",circumference);	
}