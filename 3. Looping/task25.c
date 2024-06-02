//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>
void main()
{
	int n,i,j,sum=0,sum1;

	printf("(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)\n\n");

    printf("Enter the value of n: "); //User Input - Number 
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        sum1=0;
        for(j=1;j<=i;j++)
        {
            sum1+=j;
        }
        sum+=sum1;
    }

    printf("\nSum of the series is: %d\n", sum);	
}