//Store 5 numbers in array and sort it in ascending order
#include <stdio.h>
void main()
{
    int arr[5], i, j, temp; //data members

    printf("SORTING AN ARRAY IN ASCENDING AND DESSCENDING ORDER\n\n");
 
    for(i=0;i<5;i++)  //User Input - Elements of Array
    {
        printf("Enter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++) //Sorting in Ascending Order
    {
        for(j=0;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAscending Order: ");
    for(i=0;i<5;i++) //Printing Sorted Array
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=0;i<5;i++) //Sorting in Descending Order
    {
        for(j=0;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Descending Order: ");
    for(i=0;i<5;i++) //Printing Sorted Array
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}