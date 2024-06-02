//Find ascii value of given number/character
#include<stdio.h>
void main()
{
	char ch; //data member

	printf("FINDIND ASCII VALUE FROM CHARACTER VALUE\n\n");

	printf("Enter a Charcter: "); //User Input - Charcter Value
	scanf("%c",&ch);

	printf("\nThe ASCII value of the %c is: %d\n",ch,ch); //Printing ASCII value from Charcter Value
}