//WAP to perform Palindrome number using for loop and function
#include <stdio.h>
void palindrome(int n)
{
	int remainder,reverse=0,temp=n,i; //data members

	printf("\nOriginal Number: %d\n",n);

	if(n<0)
	{
		n=-n;
	}
	
	for(i=n;i!=0;i/=10) //Reversing a Number
	{
		remainder=i%10; //Get the last digit
		reverse=reverse*10+remainder;
	}

	if(reverse==temp)
	{
		printf("\nYes %d is a Palindrome Number.\n",temp);
	}
	else
	{
		printf("\nNo %d is not a Palindrome Number.\n",temp);
	}	
}
void main()
{
	int n;

	printf("PALINDROME NUMBER\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

	palindrome(n);
}