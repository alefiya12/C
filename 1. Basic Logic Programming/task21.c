//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
void main()
{
	int n1,n2,n3,n4,temp; //data members

	printf("SWAPPING TWO VALUES WITH & WITHOUT USING THIRD VARIABLE\n\n");

	printf("Enter Number 1: "); //User Input - Number 1
	scanf("%d",&n1);
	printf("Enter Number 2: "); //User Input - Number 2
	scanf("%d",&n2);

	n3=n1; //Copy n1 in n3
	n4=n2; //Copy n2 in n4

	printf("\nBEFORE SWAPPING\n"); //Before Swapping
	printf("n1: %d  n2: %d\n",n1,n2);

	temp=n1;
	n1=n2;
	n2=temp;
	printf("\nAFTER SWAPPING (Using 3rd Variable)\n"); //After Swapping Using 3rd Variable
	printf("n1: %d  n2: %d\n",n1,n2);

	n3=n3+n4;
	n4=n3-n4;
	n4=n3-n4;
	printf("\nAFTER SWAPPING (Without Using 3rd Variable)\n"); //After Swapping Without Using 3rd Variable
	printf("n1: %d  n2: %d\n",n1,n2);	
}