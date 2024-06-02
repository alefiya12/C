// Write a C program to check whether a triangle can be formed with the given values for the angles.
#include <stdio.h>
void main()
{
	int angle1,angle2,angle3,triangle; //data members

	printf("CHECKING WHETHER A TRIANGLE CAN BE FORMED WITH GIVEN ANGLES\n\n");

	printf("Enter Angle 1: "); //User Input - Angle 1
	scanf("%d",&angle1);
	printf("Enter Angle 2: "); //User Input - Angle 2
	scanf("%d",&angle2);
	printf("Enter Angle 3: "); //User Input - Angle 3
	scanf("%d",&angle3);

	triangle=angle1+angle2+angle3; //Sum of all angles

	if(triangle==180) //Triangle can be formed when the total of angles add upto 180 degrees
	{
		printf("\nThe angles form a valid triangle.\n");
	}
	else
	{
		printf("\nThe angles do not form a valid triangle.\n");
	}
}