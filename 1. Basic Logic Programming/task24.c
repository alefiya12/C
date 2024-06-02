//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
void main()
{
	char n1[20],n2[20],n3[20],n4[20],n5[20]; //data members
	int sal1,sal2,sal3,sal4,sal5; //data members
	float total_sal,avg_sal; //data members

	printf("CALCULATING TOTAL AND AVERAGE SALARY OF 5 EMPLOYEES\n\n");

	printf("Employee Name 1: "); //User Input - Employee 1
	scanf("%s",n1);
	printf("Employee Salary 1: ");
	scanf("%d",&sal1);

	printf("\nEmployee Name 2: "); //User Input - Employee 2
	scanf("%s",n2);
	printf("Employee Salary 2: ");
	scanf("%d",&sal2);

	printf("\nEmployee Name 3: "); //User Input - Employee 3
	scanf("%s",n3);
	printf("Employee Salary 3: ");
	scanf("%d",&sal3);

	printf("\nEmployee Name 4: "); //User Input - Employee 4
	scanf("%s",n4);
	printf("Employee Salary 4: ");
	scanf("%d",&sal4);

	printf("\nEmployee Name 5: "); //User Input - Employee 5
	scanf("%s",n5);
	printf("Employee Salary 5: ");
	scanf("%d",&sal5);

	total_sal=sal1+sal2+sal3+sal4+sal5; //Calculating Total Salary
	avg_sal=total_sal/5; //Calculating Average Salary

	printf("\nTotal Salary: %.2f\n",total_sal);
	printf("Average Salary: %.2f\n",avg_sal);
}