// Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>
void main()
{
    char str[100]; //data members
    int i, max=0, count=0;

    printf("FINDING MAXIMUM NUMBER OF CHARACTERS IN A STRING\n\n");

    printf("Enter a String: "); //User Input - String
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
            }
            count=0;
        }
    }
    if(count>max)
    {
        max=count;
    }
    printf("\nThe maximum number of characters in the string is: %d\n", max);
}