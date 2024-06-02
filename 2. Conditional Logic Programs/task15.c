// Write a C program to determine eligibility for admission to a professional course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140,
// Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72
// Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137
// The candidate is not eligible.
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int maths,phy,chem,total,total_m_p; //data members

	printf("CHECKING ELIGIBILITY CRITERIA OF THE CANDIDATE\n\n");

	printf("Enter Maths Marks: "); //User Input - Maths Marks
	scanf("%d",&maths);
	printf("Enter Physics Marks: "); //User Input - Physics Marks
	scanf("%d",&phy);
	printf("Enter Chemistry Marks: "); //User Input - Chemistry Marks
	scanf("%d",&chem);

	if(maths>100 || phy>100 || chem>100)
	{
		printf("\nInvalid Marks. Marks Cannot be greater than 100.\n");
		exit(0);
	}

	total=maths+phy+chem; //Calculating Total Marks of all 3 Subjects
	total_m_p=maths+phy; //Calculating Total Marks of Maths & Physics

	printf("\nTotal marks of Maths, Physics and Chemistry: %d\n",total);
	printf("Total marks of Maths and Physics: %d\n",total_m_p);


	if(maths>=65 && phy>=55 && chem>=50 && (total>=190 || total_m_p>=140)) //Checking Criteria for eligibility for admission
	{
		printf("\nCandidate is Eligible for Admission in a Professional Course.\n");
	}
	else
	{
		printf("\nCandidate is Not Eligible.\n");	
	}
}