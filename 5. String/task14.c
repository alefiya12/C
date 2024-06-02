//Write a program in C to combine two strings manually
#include <stdio.h>
void main()
{
    char str1[100], str2[100],result[100]; //data members
    int i=0,j=0;

    printf("COMBINING TWO STRINGS MANUALLY\n\n");

    printf("Enter the first string: "); //User Input - String 1
    gets(str1);
    printf("Enter the second string: "); //User Input - String 2
    gets(str2);

    while(str1[i]!='\0') //Copy the first string into result
    {
        result[i]=str1[i];
        i++;
    }

    while(str2[j]!='\0') //Copy the second string into result
    {
        result[i]=str2[j];
        i++;
        j++;
    }

    printf("\nThe combined string is: %s\n",result);
}
