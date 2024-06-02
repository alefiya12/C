//Write a program in C to count the total number of vowels or consonants in a string.
#include <stdio.h>
void main()
{
    char str[100]; //data members
    int i, vowel=0, consonant=0;

    printf("COUNTING TOTAL NUMBER OF VOWELS & CONSONANTS IN A STRING\n\n");

    printf("Enter a String: "); //User Input - String
    gets(str);

    for(i=0;str[i]!='\0';i++) //counting total number of vowels and consonants
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }

    printf("\nTotal number of vowels: %d\n", vowel);
    printf("Total number of consonants: %d\n", consonant);
}