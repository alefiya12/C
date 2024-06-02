//WAP to find number is even or odd using ternary operator
#include <stdio.h>
void main()
{
	int n; //data members

	printf("CHECKING IF NUMBER IS EVEN OR ODD\n\n");

	printf("Enter Number: ");
	scanf("%d",&n);

	(n==0)?printf("\n%d is Zero\n",n):(n%2==0)?printf("\n%d is Even\n",n):printf("\n%d is Odd\n",n); //Checking if number is Even Odd or Zero
}