//Find the Character Is Vowel or Not
#include <stdio.h>
void main()
{
	char a; //data member

	printf("CHECK WHETHER CHARACTER IS VOWEL OR NOT\n\n"); 

	printf("Enter Character: "); // User Input - Character
	scanf("%c",&a);

	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U') //Checking if the charcater is vowel or not
	{
		printf("\n%c is a Vowel\n",a);
	}
	else
	{
		printf("\n%c is a Consonant\n",a);
	}
}