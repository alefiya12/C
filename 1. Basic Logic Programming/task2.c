//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
void main()
{
	int a,b; //data members

	printf("SIMPLE CALCULATOR\n\n");

	printf("Enter A: "); //User Input - Number 1
	scanf("%d",&a);
	printf("Enter B: "); //User Input - Number 2
	scanf("%d",&b);

	printf("\nAddition: %d",a+b); //Addition

	printf("\nSubtraction: %d",a-b); //Subtraction

	printf("\nMultiplication: %d",a*b); //Multiplication

	printf("\nDivision: %.2f",(float)a/b); //Division

	printf("\nModulo: %d\n",a%b); //Modulo
}