// WAP to show
// i. Monday to Sunday using switch case
// ii. Vowel or Consonant using switch case
#include <stdio.h>
void main()
{
	int choice; //data member

    printf("1. Display day of the week\n2. Check vowel or consonant\n\nChoose an option: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        int day; //data member
        printf("\nEnter Number(1-7): ");
        scanf("%d", &day);
        switch(day)
        {
        case 1: 
            printf("\nMonday\n");
            break;
        case 2: 
            printf("\nTuesday\n");
            break;
        case 3: 
            printf("\nWednesday\n");
            break;
        case 4: 
            printf("\nThursday\n");
            break;
        case 5: 
            printf("\nFriday\n");
            break;
        case 6: 
            printf("\nSaturday\n");
            break;
        case 7: 
            printf("\nSunday\n");
            break;
        default:
            printf("\nInvalid Input! Please enter a number between 1 and 7.\n");
    	}
        break;
    case 2:
        char ch; //data member
        printf("\nEnter a Character: ");
        scanf(" %c", &ch);
        switch(ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n%c is a Vowel\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("\n%c is a Consonant\n", ch);
            else
                printf("\n%c is not a valid alphabet character\n", ch);
    	}
        break;
    default:
        printf("\nInvalid choice! Please choose 1 or 2.\n");
    }	
}