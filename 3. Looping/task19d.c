// Patterns:
// A
// A B
// A B C
// A B C D
// A B C D E
#include <stdio.h>
void main()
{
	int i,j,k;

	for(i=0;i<5;i++) //Outer Loop
	{
		k=65;
		for(j=0;j<=i;j++) //Inner Loop
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
}