//Accept 3 numbers from user using while loop and check each numbers palindrome
#include <stdio.h>
void palindrome(int n)
{
	int remainder,reverse=0,temp=n; //data members
	printf("Original Number: %d",n);

	if(n<0)
	{
		n=-n;
	}
	
	while(n!=0) //Reversing a Number
	{
		remainder=n%10; //Get the last digit
		reverse=reverse*10+remainder;
		n=n/10; //Remove the last digit
	}

	if(reverse==temp)
	{
		printf("\nYes %d is a Palindrome Number.\n",temp);
	}
	else
	{
		printf("\nNo %d is not a Palindrome Number.\n",temp);
	}
	printf("\n");	
}
void main()
{
	int n,i=1;

	printf("PALINDROME NUMBER\n\n");

	while(i<=3)
	{
		printf("Enter Number: "); //User Input - Number
		scanf("%d",&n);
		palindrome(n);
		i++;
	}
}