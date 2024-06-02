//WAP to accept 5 numbers from user and display all numbers
#include <stdio.h>
void main()
{
	int a[5],i,j=1; //data members

	printf("DISPLAYING 5 NUMBERS ENTERED BY USER\n\n");

	for (i=0;i<5;i++) //User Input - 5 Numbers
	{
		printf("Enter Number %d: ",j);
		scanf("%d",&a[i]);
		j++;
	}

	printf("\n");
	j=1;
	for (i=0;i<5;i++) //Displaying 5 Numbers 
	{
		printf("Number %d: %d\n",j,a[i]);
		j++;
	}

}