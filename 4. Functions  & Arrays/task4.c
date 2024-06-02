//WAP to find factorial using recursion
#include <stdio.h>
int factorial(int n) // Recursive function to calculate factorial
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); //Recursive case
    }
}

void main()
{
    int number; //data members

    printf("CALCULATING FACTORIAL\n\n");

    printf("Enter a Number: "); //User Input - Number
    scanf("%d", &number);

    int result = factorial(number); //Calculateing factorial

    printf("\nFactorial of %d is %d\n", number, result);
}