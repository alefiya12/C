//Write a program in C to extract a substring from a given string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100],result[100]; //data members
    int start,length,i;

    printf("EXTRACTING A SUBSTRING FROM A GIVEN STRING\n\n");

    printf("Enter a String: "); //User Input - String
    gets(str);
    printf("Enter the Starting position: "); //User Input - Starting Position of Substring
    scanf("%d", &start);
    printf("Enter the Length of the substring: "); //User Input - Length of Substring
    scanf("%d", &length);


    if(start<0 || length<0 || start+length>strlen(str))  //Check if the start position and length are valid
    {
        printf("\nInvalid start position or length.\n");
        return;
    }

    for(i=0;i<length;i++) //Extract the substring
    {
        result[i]=str[start+i];
    }

    result[i] = '\0'; //Null-terminate the result string

    printf("\nExtracted substring: %s\n", result);
}