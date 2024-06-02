// Patterns:
// A
// B C
// D E F
// G H I J
// K L M N O 
#include <stdio.h>
void main()
{
	int i,j,k=65;

	for(i=0;i<5;i++) //Outer Loop
	{
		for(j=0;j<=i;j++) //Inner Loop
		{
			printf("%c ",k);
			k++;			
		}
		printf("\n");
	}
}