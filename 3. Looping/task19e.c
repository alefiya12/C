// Patterns:
//         * 
//       * * *
//     * * * * * 
//   * * * * * * *
// * * * * * * * * *
#include <stdio.h>
void main()
{
	int i,j,k,l;

	for(i=1;i<=5;i++) //Outer Loop
	{
		for(j=i;j<5;j++) //Inner Loop
		{
			printf("  ");
		}
		for(k=1;k<=i;k++) //Inner Loop
		{
			printf("* ");
		}
		for(l=i;l>=2;l--) //Inner Loop
		{
			printf("* ");
		}
		printf("\n");
	}
}