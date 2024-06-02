//Accept marks from user and check pass or fail
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int m1,m2,m3,total; //data members
	float per; 

	printf("CHECKING PASS OR FAIL\n\n");

	printf("Enter Marks 1: "); //User Input - Marks 1
	scanf("%d",&m1);
	printf("Enter Marks 2: "); //User Input - Marks 2
	scanf("%d",&m2);
	printf("Enter Marks 3: "); //User Input - Marks 3
	scanf("%d",&m3);

	if(m1>100 || m2>100 || m3>100)
	{
		printf("\nMarks cannot be Greater than 100\n");
		exit(0);
	}

	total=m1+m2+m3; //Calculating Total
	per=total/3; //Calculating Percentage

	printf("\nTotal: %d\n",total);
	printf("Percentage: %.2f\n",per);

	if(per<33) //Calculating Result - if percentage is less than 33 than fail or pass
	{
		printf("\nFAIL\n");
	}
	else
	{
		printf("\nPASS\n");
	}
}