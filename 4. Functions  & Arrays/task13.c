//Perform 2D matrix array
#include <stdio.h>
void main()
{
	int arr[3][3],i,j;

	printf("INPUTING AND DISPLAYING A 3X3 2D MATRIX\n\n");
	
	for(i=0;i<3;i++) //User Input - Elements of array
	{
		for(j=0;j<3;j++)
		{
			printf("Enter arr[%d][%d]: ",i,j);
       		scanf("%d",&arr[i][j]);
		}
	}

	printf("\n");

	for(i=0;i<3;i++) //User Input - Elements of array
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}