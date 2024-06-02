//Calculate person’s Annual salary
#include<stdio.h>
void main()
{
	int salary,a_sal; //data members

	printf("CALCULATING ANNUAL SALARY\n\n");

	printf("Enter Monthly Salary: $"); //User Input - Annual Salary
	scanf("%d",&salary);

	a_sal=salary*12; //Calculating Annual Salary

	printf("\nAnnual Salary: $%d\n",a_sal);
}