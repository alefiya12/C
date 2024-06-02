//WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include <stdio.h>
void main()
{
	int arr[5],i;

	printf("CHEKING ENTERED NUMBER IS EVEN OR ODD\n\n");

	for(i=0;i<5;i++)  //User Input - Elements of Array
    {
        printf("Enter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\n");

    for(i=0;i<5;i++)
    {
    	if(arr[i]%2==0)
    	{
    		printf("%d is an Even Number.\n",arr[i]);
    	}
    	else
    	{
    		printf("%d is an Odd Number.\n",arr[i]);
    	}
    }
}