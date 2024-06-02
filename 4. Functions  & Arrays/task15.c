//Accept 5 numbers from user and perform sum of array
#include <stdio.h>
void main()
{
	int arr[5],sum=0,i; //data members

	printf("SUM OF 5 NUMBERS OF ARRAY\n\n");

	for(i=0;i<5;i++) //User Input - Elements of array
	{
		printf("Enter arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<5;i++) //Calculating Sum
	{
		sum+=arr[i];
	}

	printf("\nSum: %d\n",sum);
}