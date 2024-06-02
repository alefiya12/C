//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
void main()
{
	int n; //data member

	printf("CALCULATING REQUIRED APPLES BASED ON NUMBER OF STUDENTS\n\n");
	
	printf("Enter Number of Students: "); //User Input - Number of Students
	scanf("%d",&n);

	printf("\nEach Student is given 5 Apples.\n");

	printf("\nNumber of Students: %d\n",n); //Printing Number of Students
	printf("Number of Apples Required: %d\n",n*5); //Printing Number of Apples Required
}