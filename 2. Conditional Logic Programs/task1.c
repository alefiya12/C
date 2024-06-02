//Write a C program to accept two integers and check whether they are equal or not
#include <stdio.h>
void main()
{
	int a,b; //data members

	printf("CHECKING WHETHER TWO INTEGERS ARE EQUAL OR NOT\n\n");

	printf("Enter Number 1: "); //User Input - Number 1
	scanf("%d",&a);
	printf("Enter Number 2: "); //User Input - Number 2
	scanf("%d",&b);

	if(a==b) //Checking Equality
	{
		printf("\n%d & %d are Equal\n",a,b);
	}
	else
	{
		printf("\n%d & %d are Not Equal\n",a,b);
	}
}