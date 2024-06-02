//Convert country’s name in abbreviate form
#include<stdio.h>
void main()
{
	char country[20]; //data member

	printf("CONVERTING COUNTRY'S NAME INTO ABBREVIATED FORM\n\n");

	printf("Enter Country Name: "); //User Input - Country's Name
	scanf("%s",country);

	printf("Abbrevaited Name: %c%c%c\n",country[0],country[1],country[2]); //Converting country's name in abbreviated form
}