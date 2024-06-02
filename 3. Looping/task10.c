//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: 5)
#include <stdio.h>
void main()
{
	int number,firstDigit,lastDigit,sum; //data members

	printf("CALCULATONG SUMMATION OF FIRST AND LAST DIGITS\n\n");

    printf("Enter a Number: ");
    scanf("%d",&number);

    lastDigit=number%10; //Get the last digit

    
    firstDigit=number;
    while(firstDigit>=10) //Get the first digit
    {
        firstDigit=firstDigit/10;
    }

    sum=firstDigit+lastDigit; //summation of first and last digit of a number

    printf("\nSum of the first and last digit: %d\n", sum);
}