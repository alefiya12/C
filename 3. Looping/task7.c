//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>
void main()
{
	int n,remainder,reverse=0; //data members

	printf("REVERSING A NUMBER\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

	printf("\nOriginal Number: %d\n",n);

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

	printf("Reversed Number: %d\n",reverse);
}