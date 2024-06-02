//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include <stdio.h>
void main()
{
	int ch; //data members
    double num1, num2, result;

    printf("MENU DRIVEN CALCULATOR\n\n");

    printf("Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");// Display the menu
    
    while(1) //menu driven
    {
        printf("\nEnter your Choice: ");
        scanf("%d",&ch);

        if (ch==5)
        {
            printf("Exiting the program.\n");
            break; //Exit the program
        }

        printf("Enter Number 1: "); //User Input - Number 1
        scanf("%lf",&num1);
        printf("Enter Number 2: "); //User Input - Number 2
		scanf("%lf",&num2);

        switch (ch)
        {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}