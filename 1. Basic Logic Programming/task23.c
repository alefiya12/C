//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
void main()
{
	int n1,n2; //data members

	printf("SWAPPING TWO VALUES WITHOUT USING THIRD VARIABLE\n\n");

	printf("Enter Number 1: "); //User Input - Number 1
	scanf("%d",&n1);
	printf("Enter Number 2: "); //User Input - Number 2
	scanf("%d",&n2);

	printf("\nBEFORE SWAPPING\n"); //Before Swapping
	printf("n1: %d  n2: %d\n",n1,n2);

	n1=n1*n2;
	n2=n1/n2;
	n1=n1/n2;
	printf("\nAFTER SWAPPING (Without Using 3rd Variable)\n"); //After Swapping Without Using 3rd Variable
	printf("n1: %d  n2: %d\n",n1,n2);	
}