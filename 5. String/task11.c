//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>
void main()
{
    char str[100]; //data members
    int i;

    printf("REPLACING LOWERCASE WITH UPPERCASE & VICE VERSA\n\n");

    printf("Enter a String: "); //User Input - String
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' &&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("\nModified string: %s\n", str);
}