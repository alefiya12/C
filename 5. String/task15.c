//Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char str[200],largest[100], smallest[100];
    int i = 0, len = 0, maxLen = 0, minLen = 1000, start = 0, end = 0, wordStart = 0;

    printf("FINDING THE LARGEST AND SMALLEST WORD IN A STRING\n\n");
    
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        while(isspace(str[i])) i++; //Skip any leading spaces
        wordStart = i; //Mark the beginning of a word
        
        while(str[i] != '\0' && !isspace(str[i])) i++; //Find the end of the word
        len = i - wordStart; //Calculate the length of the word
        
        if(len > maxLen) //Check if the current word is the largest
        {
            maxLen = len;
            start = wordStart;
            end = i;
            strncpy(largest, &str[start], end - start);
            largest[end - start] = '\0';
        }
        
        if(len < minLen && len > 0) //Check if the current word is the smallest
        {
            minLen = len;
            start = wordStart;
            end = i;
            strncpy(smallest, &str[start], end - start);
            smallest[end - start] = '\0';
        }

        while(isspace(str[i])) i++;  //Skip any trailing spaces
    }

    printf("\nLargest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}