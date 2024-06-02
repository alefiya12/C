//WAP to find maximum number among 3 numbers using ternary operator
#include <stdio.h>
void main()
{
	int n1,n2,n3; //data members

	printf("FINDING MAXIMUM NUMBER AMONG 3 NUMBERS\n\n");

	printf("Enter Number 1: "); //User Input - Number 1
	scanf("%d",&n1);
	printf("Enter Number 2: "); //User Input - Number 2
	scanf("%d",&n2);
	printf("Enter Number 3: "); //User Input - Number 3
	scanf("%d",&n3);

	(n1 >= n2 && n1 >= n3) ? 
        (n1 == n2 && n1 == n3) ? printf("\nAll numbers are equal and the value is %d\n", n1) : 
        (n1 == n2) ? printf("\n%d and %d are the Maximum and equal\n", n1, n2) :
        (n1 == n3) ? printf("\n%d and %d are the Maximum and equal\n", n1, n3) :
        printf("\n%d is Maximum\n", n1) :
    (n2 >= n1 && n2 >= n3) ? 
        (n2 == n3) ? printf("\n%d and %d are the Maximum and equal\n", n2, n3) :
        printf("\n%d is Maximum\n", n2) :
    printf("\n%d is Maximum\n", n3); //Finding Maximum Number among 3 Numbers
}