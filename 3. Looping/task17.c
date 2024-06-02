//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include <stdio.h>
void main()
{
	int n[5],i,even=0,odd=0;

	printf("CALCULATING NUMBER OF EVEN & ODD NUMBER\n\n");

	for(i=0;i<5;i++) //User Input - 5 Numbers
	{
		printf("Enter n[%d]: ",i);
		scanf("%d",&n[i]);
	}

	i=0;
	while(i<5)
	{
		if(n[i]%2==0)
		{
			even++; //Counting Even Numbers
		}
		else
		{
			odd++; //Counting Odd Numbers
		}
		i++;
	}

	printf("\nNumber of Even Numbers: %d\n",even);
	printf("Number of Odd Numbers: %d\n",odd);
}