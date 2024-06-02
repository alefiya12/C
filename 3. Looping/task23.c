//1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,i,sum=0;

	printf("1 + 2 + 3 + 4 + 5 + ... + n\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

	if(n<0) //Checking if the entered Number is Positive. 
	{
		printf("Enter a Positive Number.\n");
		exit(0);
	}

	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}

	 printf("\nSum of the series 1 + 2 + 3 + ... + %d is: %d\n", n, sum);
}