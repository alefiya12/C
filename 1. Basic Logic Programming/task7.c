// Find area of Rectangle Formula : A=wl
#include<stdio.h>
void main()
{
	float w,l,area; //data members

	printf("AREA OF RECTANGLE\n\n");

	printf("Enter Width(cm): "); //User Input - Width of Rectangle
	scanf("%f",&w);
	printf("Enter Length(cm): "); //User Input - Length of Rectangle
	scanf("%f",&l);

	area=w*l; //a=width*length - Area of Rectangle
	printf("\nArea of Rectangle: %.2f cm^2\n",area);
}