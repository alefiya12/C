//Accept 2 numbers and find out its sum check it size
#include<stdio.h>
void main()
{
	int n1,n2,sum; //data members

	printf("SUM AND SIZE OF TWO NUMBERS\n\n");

	printf("Enter Number 1: "); //User Input - Number 1
    scanf("%d",&n1);
    printf("Enter Number 2: "); //User Input - Number 2
    scanf("%d",&n2);

    sum=n1+n2;  // Calculating the sum
    printf("\nThe sum of %d and %d is: %d\n",n1,n2,sum);

    if (sum>0) // Check the size of the sum
    {
        printf("The sum is positive.\n");
    }
    else if (sum<0)
    {
        printf("The sum is negative.\n");
    }
    else
    {
        printf("The sum is zero.\n");
    }	
}