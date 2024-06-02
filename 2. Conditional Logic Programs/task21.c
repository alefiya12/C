// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary >  20000 : HRA = 30%, DA = 95%
#include <stdio.h>
void main()
{
	float basic_salary, HRA, DA, gross_salary; //data members

	printf("CALCULATING GROSS SALARY\n\n");

    printf("Enter Basic Salary of the Employee: "); //User Input - Basic Salary of Employee
    scanf("%f", &basic_salary);

    if (basic_salary<=10000) //Calculateing HRA and DA based on basic salary
    {
        HRA = basic_salary * 0.20;
        DA = basic_salary * 0.80;
    }
    else if (basic_salary<=20000)
    {
        HRA = basic_salary * 0.25;
        DA = basic_salary * 0.90;
    }
    else
    {
        HRA = basic_salary * 0.30;
        DA = basic_salary * 0.95;
    }

    gross_salary=basic_salary+HRA+DA; //Calculating gross salary

    printf("\nGross Salary of the employee: %.2f\n", gross_salary);
}