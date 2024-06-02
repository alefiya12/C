//WAP to print table up to given numbers
#include <stdio.h>
void main()
{
	int n, i, j;

    printf("PRINTING TABLE UPTO A GIVEN NUMBER\n\n");

    printf("Enter the number up to which the tables should be printed: "); //User Input - Number upto which table should be printed
    scanf("%d", &n);

    for (i=1;i<=n;i++) //Printing Tables from 1 to Given Number
    {
        printf("Table for %d:\n",i);
        for (j=1;j<=10;j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n"); 
    }
}