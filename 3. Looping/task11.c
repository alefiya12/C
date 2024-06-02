//Accept 5 names from user at run time.
#include <stdio.h>
void main()
{
	char names[5][50]; //data members
	int i;

	printf("INPUT 5 NAMES FROM USER AT RUN TIME\n\n");

	for (i=1; i<=5; i++) //User Input - 5 Names
	{
		printf("Enter Name %d: ",i);
		scanf("%s",names[i]);
	}

	printf("\nEntered Names:\n"); //Displayong 5 Names
	for (i=1; i<=5; i++)
	{
		printf("Name %d: %s\n",i,names[i]);
	}
}