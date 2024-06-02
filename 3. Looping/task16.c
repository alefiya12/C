//Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>
void main()
{
	int i=1,n,sum=0; //data members

	printf("CALCULATING SUM OF NATURAL NUMBERS\n\n");

	printf("Enter Number: ");
	scanf("%d",&n);

	while(i<=n) //condition
	{
		sum=sum+i;
		i++; //increment
	}

	printf("\nSum of First %d Numbers is: %d\n",n,sum);	
}