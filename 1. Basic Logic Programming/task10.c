//Find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
void main()
{
	float length,width,height,area; //data members

	printf("AREA OF RECTANGULAR PRISM\n\n");

	printf("Enter Length(cm): "); //User Input - Length of Rectangular Prism
	scanf("%f",&length);
	printf("Enter Width(cm): "); //User Input - Width of Rectangular Prism
	scanf("%f",&width);
	printf("Enter Height(cm): "); //User Input - Height of Rectangular Prism
	scanf("%f",&height);

	area=2*((width*length)+(height*length)+(height*width)); //a=2*((width*length)+(height*length)+(height*width)) - Area of Rectangular Prism
	printf("\nArea of Rectangular Prism: %.2f cm^2\n",area);
}