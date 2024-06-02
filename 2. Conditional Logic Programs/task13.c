//WAP to find minimum number among 3 numbers using ternary operator
#include <stdio.h>
void main()
{
	int n1,n2,n3; //data members

	printf("FINDING MINIMUM NUMBER AMONG 3 NUMBERS\n\n");

	printf("Enter Number: "); //User Input - Number 1
	scanf("%d",&n1);
	printf("Enter Number: "); //User Input - Number 2
	scanf("%d",&n2);
	printf("Enter Number: "); //User Input - Number 3
	scanf("%d",&n3);

	(n1<=n2 && n1<=n3)?
		(n1==n2 && n1==n3)?printf("\nAll numbers are equal and the value is %d\n", n1):
		(n1==n2)?printf("\n%d and %d are the Minimum and equal\n", n1, n2):
        (n1==n3)?printf("\n%d and %d are the Minimum and equal\n", n1, n3):
        printf("\n%d is Minimum\n", n1):
    (n2 <= n1 && n2 <= n3) ? 
        (n2 == n3) ? printf("\n%d and %d are the Minimum and equal\n", n2, n3) :
        printf("\n%d is Minimum\n", n2) :
    printf("\n%d is Minimum\n", n3);  //Finding Minimum Number among 3 Numbers
}