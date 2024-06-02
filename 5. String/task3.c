//Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
void main()
{
    char str[100]; //data members
    int i, len;

    printf("PRINTING INDIVIDUAL CHARACTERS OF A STRING IN REVERSE ORDER\n\n");

    printf("Enter any String: "); //User Input - String
    gets(str);

    len = strlen(str); //Finding Length of the string

    for (i=len-1;i>=0;i--) //Printing Individual Characters of a String in reverse order
    {
        printf("%c ",str[i]);
    }
    printf("\n");
}