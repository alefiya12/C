//Write a program in C to remove characters from a string except alphabets.
#include <stdio.h>
void main()
{
    char str[100]; //data members
    int i, j, count = 0;

    printf("REMOVING CHARACTERS FROM THE STRING EXCEPT ALPHABETS\n\n");

    printf("Enter a String: "); //User Input - String
    gets(str);

    printf("\nString is: ");
    for(i=0;str[i]!='\0';i++) //Removing Characters from the String except Special Characters
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
}