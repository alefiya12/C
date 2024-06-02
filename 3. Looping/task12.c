//Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
void main()
{
	int num,temp,remainder,result=0,i;

	printf("CHECKING ARMSTRONG NUMBER\n\n");

    printf("Enter a 3 digit Number: "); //User Input - Number
    scanf("%d", &num);

    printf("\nUsing WHILE Loop\n");
    //Using WHILE Loop
    temp=num;
    while(temp!=0) //Checking Armstrong Number
    {
    	remainder=temp%10;
       	result+=remainder*remainder*remainder;
	    temp /= 10;
    }
    if(result==num)
    {
        printf("%d is an Armstrong number.\n",num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n",num);	
    }

    printf("\nUsing FOR Loop\n");
    //Using FOR Loop
    temp=num;
    remainder=0;
    result=0;
    for(i=0;i<num;i++) //Checking Armstrong Number
    {
    	remainder=temp%10;
       	result+=remainder*remainder*remainder;
	    temp /= 10;
    }
    if(result==num)
    {
        printf("%d is an Armstrong number.\n",num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n",num);	
    }
}