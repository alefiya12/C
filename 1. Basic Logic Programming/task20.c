//Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.
#include<stdio.h>
void main()
{
	int sal; //data member
	float ins_pre,loan_ins,r_sal; //data members

	printf("CALCULATING REMAINING SALARY AFTER DEDUCTING 10%% INSURANCE PREMIUM & 10%% LOAN INSTALLMENT\n\n");

	printf("Enter Monthly Salary: $"); //User Input - Monthly Salary
	scanf("%d",&sal);

	ins_pre=sal*0.10; //Calculating 10% Insurance Premium
	loan_ins=sal*0.10; //Calculating 10% Loan Installment

	printf("\nInsurance Premium: $%.2f\n",ins_pre);
	printf("Loan Installment: $%.2f\n",loan_ins);

	r_sal=sal-(ins_pre+loan_ins); //Calculating Remaining Salary

	printf("\nRemaining Salary: $%.2f\n",r_sal);

}