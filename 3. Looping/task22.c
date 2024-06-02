//C Program to Reverse a Number Using FOR Loop
#include <stdio.h>
void main()
{
	int n,remainder,reverse=0,i; //data members

	printf("REVERSING A NUMBER\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

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

	printf("Reversed Number: %d\n",reverse);
}