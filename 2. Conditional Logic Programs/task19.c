// Write a program in C to calculate and print the electricity bill of a given customer. 
// The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the
// total amount to be paid to the customer. The charge are as follow:
// Units								Charge/unit
// upto 350								@1.20
// 350 and above but less than 600		@1.50
// 600 and above but less than 800 		@1.80
// 800 and above 						@2.00
// If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
#include <stdio.h>
void main()
{
	int customerID; //data member
    char name[50]; //data member
    float units, bill, surcharge = 0; //data members

    printf("CALCULATING ELECTRICITY BILL\n\n");

    printf("Enter Customer ID: "); //User Input - Customer ID
    scanf("%d", &customerID);
    printf("Enter Customer Name: "); //User Input - Customer Name
    scanf(" %[^\n]", name);
    printf("Enter units Consumed: "); //User Input - Electricity Input
    scanf("%f", &units);

    if (units<350)
    {
        bill=units*1.20;
    }
    else if (units<600)
    {
        bill=units*1.50;
    }
    else if (units<800)
    {
        bill=units*1.80;
    }
    else
    {
        bill=units*2.00;
    }

    if (bill>800) //Check if bill exceeds Rs. 800 to add surcharge
    {
        surcharge=bill*0.18;
        bill+=surcharge;
    }

    if (bill < 256) //Minimum Bill Should be Rs. 256
    {
        bill = 256;
    }

    // Print the bill
    printf("\nElectricity Bill\n");
    printf("Customer ID   : %d\n", customerID);
    printf("Customer Name : %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Bill    : Rs. %.2f\n", bill);
}