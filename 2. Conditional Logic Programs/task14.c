//WAP to find the largest of three numbers.
#include <stdio.h>
void main()
{
	int n1,n2,n3; //data members

	printf("FINDING MAXIMUM NUMBER AMONG 3 NUMBERS\n\n");

	printf("Enter Number: "); //User Input - Number 1
	scanf("%d",&n1);
	printf("Enter Number: "); //User Input - Number 2
	scanf("%d",&n2);
	printf("Enter Number: "); //User Input - Number 3
	scanf("%d",&n3);

    if (n1>=n2 && n1>=n3) //Finding Maximum Number among 3 Numbers
    {
        if (n1==n2 && n1==n3)
        {
            printf("\nAll numbers are equal and the value is %d\n",n1);
        }
        else if (n1==n2)
        {
            printf("\n%d and %d are the Maximum and equal\n",n1,n2);
        }
        else if (n1==n3)
        {
            printf("\n%d and %d are the Maximum and equal\n",n1,n3);
        }
        else
        {
            printf("\n%d is the Maximum\n",n1);
        }
    }
    else if (n2>=n1 && n2>=n3)
    {
        if (n2==n3)
        {
            printf("\n%d and %d are the Maximum and equal\n",n2,n3);
        }
        else
        {
            printf("\n%d is the Maximum\n",n2);
        }
    }
    else
    {
        printf("\n%d is the Maximum\n",n3);
    }
}