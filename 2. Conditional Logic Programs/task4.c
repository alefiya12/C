//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n1,n2,ch; //data members

	printf("SIMPLE CALCULATOR\n\n");

	printf("Enter Number 1: "); //User Input - Number 1
	scanf("%d",&n1);
	printf("Enter Number 2: "); //User Input - Number 2
	scanf("%d",&n2);

	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n\n");

	printf("Enter Your Choice: "); //User Input - Choice
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
		printf("\nAddition: %d\n",n1+n2);
		break;
	case 2:
		printf("\nSubtraction: %d\n",n1-n2);
		break;
	case 3:
		printf("\nMultiplication: %d\n",n1*n2);
		break;
	case 4:
		printf("\nDivision: %.2f\n",(float)n1/n2);
		break;
	case 5:
		printf("\nModulo: %d\n",n1%n2);
		break;
	default:
		printf("\nInvalid Choice.\n");
	}
}