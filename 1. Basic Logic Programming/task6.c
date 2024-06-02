// Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
void main()
{
	float b,h,area; //data members

	printf("AREA OF TRIANGLE\n\n");

	printf("Enter Base(cm): "); //User Input - Base of Triangle 
	scanf("%f",&b);
	printf("Enter Height(cm): "); //User Height - Height of Triangle
	scanf("%f",&h);

	area=(b*h)/2; //a=(base*height)/2 - Area of Triangle
	printf("\nArea of Triangle: %.2f cm^2\n",area);
}