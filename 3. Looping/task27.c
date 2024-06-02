//1 2 3 6 9 18 27 54...
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,i,n1=1,n2=2,n3=0;

	printf("1 2 3 6 9 18 27 54...\n\n");

	printf("Enter Number: "); //User Input - Number
	scanf("%d",&n);

	if(n<0) //Checking if the entered Number is Positive.
	{
		printf("Enter a Positive Number.\n");
		exit(0);
	}

	for(i=1;i<=n;i++)
	{
		if (i%2!=0)
		{
            printf("%d ",n1);
            n1*=3; // next power of 3
        }
        else
        {
            printf("%d ",n2);
            n2*=3; // next 2 * power of 3
        }
	}
	printf("\n");
}