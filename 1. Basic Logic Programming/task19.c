//Write a program to find the Simple Interest
#include<stdio.h>
void main()
{
    int si,p,r,n; //data members

    printf("CALCULATING SIMPLE INTEREST\n\n");

    printf("Enter Principal Amount (p): "); //User Input - Principal Amount
    scanf("%d",&p);
    printf("Enter Rate of Interest (r): "); //User Input - Rate of Interest
    scanf("%d",&r);
    printf("Enter Number of Years (n): "); //User Input - Number of Years
    scanf("%d",&n);

    si=(p*r*n)/100; //Calculating Simple Interest

    printf("\nSimple Interest: %d\n",si);
}