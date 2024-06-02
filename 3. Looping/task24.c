//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>
void main()
{
	int n,i,sum=0;

	printf("(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)\n\n");

    printf("Enter the value of n: "); //User Input - Number 
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        sum+=i*i;
    }

    printf("\nSum of the series is: %d\n", sum);
}