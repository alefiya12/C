//Write a program in C to find the number of times a given word 'is' appears in the given string
#include <stdio.h>
void main()
{
    char str[100]; //data members
    int count = 0,i;

    printf("FINDING NUMBER OF TIMES 'IS' APPEARS IN THE STRING\n\n");

    printf("Enter the String: "); //User Input - String
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='i' && str[i + 1]=='s')
        {
            count++;
        }
    }
    printf("\nThe number of times the word 'is' appears in the string is: %d\n", count);
}