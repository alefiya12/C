//Calculate person’s insurance premium based on salary
#include<stdio.h>
void main()
{
	float salary, premium; //data member

	printf("CALCULATING INSURANCE PREMIUM BASED ON SALARY\n\n");

    printf("Enter Your Annual Salary: $"); //User Input - Annual Salary
    scanf("%f", &salary);

    premium = salary * 0.05; //Calculate the premium as 5% of the annual salary

    printf("\nYour insurance premium based on your salary is: $%.2f\n", premium);
}