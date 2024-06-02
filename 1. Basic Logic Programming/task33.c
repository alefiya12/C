//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
void main()
{
	int n; //data member

	printf("PRINTING FIRST THREE POWERS OF A NUMBER\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

	// Calculate and print the first three powers
    printf("\n%d^1 = %d\n",n,n); // n^1
    printf("%d^2 = %d\n",n,n*n); // n^2
    printf("%d^3 = %d\n",n,n*n*n); // n^3
}