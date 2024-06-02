//Write a program in C to count the total number of words in a string.
#include <stdio.h>
void main()
{
    char str[100]; //data members
    int i, count = 0;

    printf("COUNTING TOTAL NUMBER OF WORDS\n\n");

    printf("Enter a String: "); //User Input - String
    gets(str);

    for (i=0;str[i]!='\0';i++) //Counting total number of words
    {
        if (str[i]==' ')
        {
            count++;
        }
    }

    printf("\nTotal number of words in the string: %d\n", count + 1);
}