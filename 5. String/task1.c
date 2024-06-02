//Write a program in C to find the length of a string without using library functions.
#include <stdio.h>
void main()
{
    char str[100]; //data members
    int i=0;

    printf("FINDING LENGTH OF THE STRING\n\n");
    
    printf("Enter the String: "); //User Input - String
    scanf("%s", str);
    while(str[i]!='\0') //Calculating Length of the String
    {
        i++;
    }
    printf("\nThe length of the string is: %d\n", i);
}
