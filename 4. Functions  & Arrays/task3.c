//WAP to find reverse of string using recursion
#include <stdio.h>
void reverseString(char *str, int start, int end) //Function to print the reverse of a string using recursion
{
    if(start>=end)
    {
        return;
    }

    char temp = str[start]; //Swap characters
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1); //Recursive call
}

void main()
{
    char str[100]; //data members
    int length = 0;

    printf("REVERSING THE STRING\n\n");

    printf("Enter a String: "); //User Input - String
    gets(str);
    
    while (str[length]!='\0') //Get the length of the string
    {
        length++;
    }

    reverseString(str, 0, length - 1);  //Call the recursive function

    printf("\nReversed string: %s\n", str);
}