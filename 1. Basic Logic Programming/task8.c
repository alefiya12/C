// Find circumference of Rectangle formula : C = 4 * a
#include<stdio.h>
void main()
{
	float side,circumference; //data members

	printf("CIRCUMFERENCE OF RECTANGLE\n\n");

	printf("Enter Side(cm): "); //User Input - Side of Rectangle 
	scanf("%f",&side);

	circumference=4*side; //c=4*side - Circumference of Rectangle
	printf("\nCircumference of Rectangle: %.2f cm\n",circumference);
}