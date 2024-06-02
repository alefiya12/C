// Patterns:
// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1
#include <stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++) //Outer Loop
	{
		for(j=0;j<=i;j++) //Inner Loop
		{ 
			if(j%2==0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}