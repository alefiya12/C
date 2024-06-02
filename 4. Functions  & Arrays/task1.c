//Write a program to find out the max number from given array using function
#include <stdio.h>
void Max_num() //Creating Function
{
	int a[5],i,max; //data members

	for(i=0;i<5;i++) //User Input - Array of 5 Numbers
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	max=a[0]; //Assigning variable max the first index of array

	for(i=0;i<5;i++) //Findind MAX Number
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}

	printf("\nMAX Number from the array is: %d\n",max);	
}
void main()
{
	printf("FINDING MAXIMUM NUMBER FROM AN ARRAY OF 5 NUMBERS\n\n");
	Max_num(); //Calling Function	
}