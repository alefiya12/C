//1/2 - 2/3 + 3/4 - 4/5 + 5/6 n
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,i;
    double sum = 0.0;

    printf("Enter the number of terms: "); //User Input - Number
    scanf("%d", &n);

    if(n<0) //Checking if the entered Number is Positive.
	{
		printf("Enter a Positive Number.\n");
		exit(0);
	}

    for(i=1;i<=n;i++) //Calculate the series sum
    {
        if(i%2==0)
        {
            sum-=(double)i/(i+1);
        }
        else
        {
            sum+=(double)i/(i+1);
        }
    }

    printf("\nSum of the series up to %d terms is: %.6f\n", n, sum);
}