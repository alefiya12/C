// Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
void main()
{
	float side1,side2,side3,circumference; //data members

	printf("CIRCUMFERENCE OF TRIANGLE\n\n");

	printf("Enter Side 1(cm): "); //User Input - Side 1 of Triangle
	scanf("%f",&side1);
	printf("Enter Side 2(cm): "); //User Input - Side 2 of Triangle
	scanf("%f",&side2);
	printf("Enter Side 3(cm): "); //User Input - Side 3 of Triangle
	scanf("%f",&side3);

	circumference=side1+side2+side3; //c=side1+side2+side3 - Circumference of Triangle
	printf("\nCircumference of Triangle: %.2f cm\n",circumference);
}