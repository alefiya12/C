//Write a program in C to separate individual characters from a string.
#include <stdio.h>
void main()
{
    char str[100]; //data members
    int i;

    printf("SEPARATING INDIVIDUAL CHARACTERS FROM A STRING\n\n");
    
    printf("Enter a String: "); //User Input - String
    gets(str);
    printf("\nThe individual characters are: ");
    for (i=0;str[i]!='\0';i++) //Separating Individual Characters
    {
        printf("%c ",str[i]);
    }
    printf("\n");
}