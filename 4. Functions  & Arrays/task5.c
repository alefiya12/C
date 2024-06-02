//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>

void ascending(int arr[], int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void descending(int arr[], int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
	int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main()
{
    int size1, size2, i; //data members
    char ch;

    printf("SORTING TWO ARRAYS IN ASCENDING OR DESCENDING ORDER\n\n");

    printf("Enter the size of the First Array: "); //User Input - Size of Array 1
    scanf("%d", &size1);
    int arr1[size1]; //data member
    printf("Enter elements of the First Array:\n"); //User Input - Elements of Array 1
    for(i=0;i<size1;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&arr1[i]);
    }
     printf("\n");

    printf("Enter the size of the Second Array: "); //User Input - Size of Array 2
    scanf("%d",&size2);
    int arr2[size2]; //data member
    printf("Enter elements of the Second Array:\n"); //User Input - Elements of Array 2
    for(i=0;i<size2;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&arr2[i]);
    }
    printf("\n");

    printf("Enter 'a' for ascending or 'd' for descending order: "); //User Input - Choice
    scanf(" %c",&ch); //space before %c to consume any trailing newline character
    printf("\n");

    switch(ch)
    {
    case 'a':
    	ascending(arr1,size1); //Sorting array 1 in Ascending Order
    	ascending(arr2,size2); //Sorting array 2 in Ascending Order
    	printf("Sorted first array: "); //Printing Array 1
    	printArray(arr1, size1);
    	printf("Sorted second array: "); //Printing Array 2
    	printArray(arr2, size2);
    	break;
    case 'd':
    	descending(arr1,size1); //Sorting array 1 in Descending Order
    	descending(arr2,size2); //Sorting array 2 in Descending Order
    	printf("Sorted first array: "); //Printing Array 1
    	printArray(arr1, size1);
    	printf("Sorted second array: "); //Printing Array 2
    	printArray(arr2, size2);
    	break;
    default:
    	printf("\nInvalid Choice.\n");
    }
}