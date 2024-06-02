//Write a program make a summation of given number (E.g.,1523 Ans: 11)
#include <stdio.h>
void main()
{
	int n,remainder,sum=0; //data members

	printf("SUMMATION OF A NUMBER\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

	printf("\nOriginal Number: %d\n",n);

	if(n<0)
	{
		n=-n;
	}

	while(n!=0)
	{
		remainder=n%10; //Get the last digit
		sum=sum+remainder; //Summation of digits
		n=n/10; //Remove the last digit
	} 

	printf("Summation of Number: %d\n",sum);
}