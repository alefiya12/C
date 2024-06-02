// Patterns:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15 
#include <stdio.h>
void main()
{
	int i,j,k=1;

	for(i=0;i<5;i++) //Outer Loop
	{
		for(j=0;j<=i;j++) //Inner Loop
		{
			printf("%3d",k);
			k++;			
		}
		printf("\n");
	}
}