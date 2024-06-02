//Write a program in C to copy one string to another string.
#include <stdio.h>
void main()
{
    char str1[100], str2[100]; //data members

    printf("COPY ONE STRING TO ANOTHER STRING\n\n");

    printf("Enter a String: "); //User Input - String
    gets(str1);

    strcpy(str2, str1); //Copying String with an Inbuilt Function
    
    printf("\nCopied string: %s\n", str2);
}