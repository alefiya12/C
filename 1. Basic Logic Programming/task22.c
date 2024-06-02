//Calculate compound interest Compound Interest formula:
//a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include <stdio.h>
void main()
{
    double p, r, amt, ci; // data members
    int n, i;

    printf("CALCULATING COMPOUND INTEREST\n\n");

    printf("Enter Principal Amount (P): "); // User Input - Principal Amount
    scanf("%lf", &p);
    printf("Enter Rate of Interest (R): "); // User Input - Rate of Interest
    scanf("%lf", &r);
    printf("Enter Number of Years (N): "); // User Input - Number of Years
    scanf("%d", &n);

    amt=p; // Initialize amt to the principal amount
    for(i=0;i<n;i++)
    {
        amt=amt*(1+r/100.0);
    }

    ci=amt-p; // Calculating Compound Interest

    printf("\nAmount after %d years: %.2lf\n", n, amt);
    printf("Compound Interest: %.2lf\n", ci);   
}
