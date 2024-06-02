//Write a program in C to compare two strings without using string library functions.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char str1[100], str2[100]; //data members
    int i, j, flag = 0;

    printf("COMPARING TWO STRINGS\n\n");

    printf("Enter First String: "); //User Input - String 1
    gets(str1);
    printf("Enter Second String: "); //User Input - String 2
    gets(str2);

    while(str1[i]!='\0' && str2[i]!='\0') //Comparing Two Strings 
    {
        if(str1[i]!=str2[i])
        {
            flag=1; // Strings are not equal
            break;
        }
        i++;
    }

    if(flag==1)
    {
        printf("\n%s is not equal to %s\n",str1,str2);
    }
    else
    {
        printf("\n%s is equal to %s\n",str1,str2);
    }
}