//WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include <stdio.h>
void main()
{
	float height; //data members

	printf("CATEGORIZING PERSON BASED ON HEIGHT\n\n");

    printf("Enter height(cm): "); //User Input - Height(cm)
    scanf("%f",&height);

    if (height<150.0) //If Height is less than 150cm
    {
        printf("\nThe person is categorized as Dwarf.\n");
    }
    else if (height>=150.0 && height<=165.0) //If Height is greater than equal to 150cm & less than equal to 165
    {
        printf("\nThe person is categorized as Average height.\n");
    }
    else if (height>165.0 && height<=195.0) //If Height is greater than 165cm & less than equal to 195
    {
        printf("\nThe person is categorized as Tall.\n");
    } 
    else //If Height is greater than 195cm
    {
        printf("\nThe person is categorized as Very tall.\n");
    }
}