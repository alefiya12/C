//WAP to print Fibonacci series up to given numbers
#include <stdio.h>
void main()
{
	int n,n1=0,n2=1,n3; //data members

	printf("FIBONACCI SERIES\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);
	

	printf("\n%d %d ",n1,n2);

	while(n>2) //Printing Fibonacci series
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
		n--;
	}
	printf("\n");
}