// WAP to Find Area And Circumference of Circle
#include<stdio.h>
void main()
{
	float pi=3.14,radius,area,circumference; //data members

	printf("AREA & CIRCUMFERENCE OF CIRCLE\n\n");

	printf("Enter Radius(cm): "); //User Input - Radius
	scanf("%f",&radius);

	area=pi*radius*radius; //a=pi*r*r - Calculating Area of the Circle
	circumference=2*pi*radius; //c=2*pi*r - Calculating Circumference of the Circle

	printf("\nArea of Circle: %.3f cm^2",area);
	printf("\nCircumference of Circle: %.3f cm\n",circumference);
}