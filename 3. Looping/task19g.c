// Patterns:
// 1  2  3  4  5  6  7  8  9  10
// 36 37 38 39 40 41 42 43 44 11
// 35 64 65 66 67 68 69 70 45 12
// 34 63 84 85 86 87 88 71 46 13
// 33 62 83 96 97 98 89 72 47 14
// 32 61 82 95 100 99 90 73 48 15
// 31 60 81 94 93 92 91 74 49 16
// 30 59 80 79 78 77 76 75 50 17
// 29 58 57 56 55 54 53 52 51 18
// 28 27 26 25 24 23 22 21 20 19
#include <stdio.h>
#define n 10
void main()
{
    int arr[n][n],i,j,val=1,top=0,bottom=n-1,left=0,right=n-1;

    while(val<=n*n)  //Making Spiral Pattern
    {
        for(i=left;i<=right && val<=n*n;i++)
        {
            arr[top][i] = val++;
        }
        top++;
        
        for(i=top;i<=bottom && val<=n*n;i++)
        {
            arr[i][right] = val++;
        }
        right--;
        
        for(i=right;i>=left && val<=n*n;i--)
        {
            arr[bottom][i] = val++;
        }
        bottom--;
        
        for(i=bottom;i>=top && val<=n*n;i--)
        {
            arr[i][left] = val++;
        }
        left++;
    }

    for (i=0;i<n;i++) //Printing Array
    {
        for (j=0;j<n;j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}