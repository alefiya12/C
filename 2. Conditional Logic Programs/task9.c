//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include <stdio.h>
void main()
{
	char ch; //data members

	printf("CHECKING IF THE CHARACTER IS UPPERCASE, LOWERCASE, DIGIT, OR SPECIAL CHARACTER\n\n");

    printf("Enter a character: "); //User Input - Character
    scanf("%c", &ch);

    if (ch>='A' && ch<='Z') //Check if the character is an uppercase letter
    {
        printf("\n%c is an Uppercase Letter.\n",ch);
    }
    else if (ch>='a' && ch<='z')  //Check if the character is a lowercase letter
    {
        printf("\n%c is a Lowercase Letter.\n",ch);
    }
    else if (ch>='0' && ch<='9') //Check if the character is a digit
    {
        printf("\n%c is a Digit.\n",ch);
    }
    else //If the character is not an uppercase letter, lowercase letter, or digit, it is a special character
    {
        printf("\n%c is a Special Character.\n",ch);
    }
}