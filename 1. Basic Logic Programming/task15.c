//Convert school’s name in abbreviated form
#include<stdio.h>
void main()
{
	char sname1[20]="Mount",sname2[20]="Carmel",sname3[20]="Convent",sname4[20]="High",sname5[20]="School"; //Declaring Static School Name

	printf("CONVERTING SCHOOL'S NAME INTO ABBREVIATED FORM\n\n");

	printf("School Name: %s %s %s %s %s\n",sname1,sname2,sname3,sname4,sname5); //Printing School Name
	printf("Abbrevaited Name: %c.%c.%c.%c.%c\n",sname1[0],sname2[0],sname3[0],sname4[0],sname5[0]); //Converting school’s name in abbreviated form
}