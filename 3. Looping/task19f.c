// Patterns:
// * 
// * *
// * * *  
// * * * *
// * * * * * 
// * * * * * *
// * * * * *
// * * * *
// * * * 
// * *
// *
#include <stdio.h>
void main()
{
	int i,j;

	for(i=0;i<6;i++) //Outer Loop
	{
		for(j=0;j<=i;j++) //Inner Loop
		{
			printf("* ");	
		}
		printf("\n");
	}
	for(i=5;i>0;i--) //Outer Loop
	{
		for(j=i-1;j>=0;j--) //Inner Loop
		{
			printf("* ");	
		}
		printf("\n");
	}
}