//WAP to accept 5 students name and store it in array
#include <stdio.h>
void main()
{
	char names[5][50]; //data members
	int i;

	printf("ACCEPTING AND PRINTING 5 STUDENTS NAMES\n\n");

	for(i=0;i<5;i++) //USer Input - 5 Names
	{
		printf("Enter Name %d: ",i+1);
		scanf("%s",names[i]);
	}

	printf("\n");

	for(i=0;i<5;i++) //Displaying 5 names
	{
		printf("Name %d: %s\n",i+1,names[i]);
	}
}