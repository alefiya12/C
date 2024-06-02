//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;
    int i, j, k;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &row2, &col2);

    if (row1 != row2 || col1 != col2) {
        printf("Matrices must have the same dimensions for addition and subtraction.\n");
        return 1;
    }

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Addition of matrices
    printf("\nAddition of Matrix A and B:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            result[i][j] = a[i][j] + b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Subtraction of matrices
    printf("\nSubtraction of Matrix A and B:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            result[i][j] = a[i][j] - b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    if (col1 != row2) {
        printf("For multiplication, the number of columns in Matrix A must be equal to the number of rows in Matrix B.\n");
        return 1;
    }

    // Multiplication of matrices
    printf("\nMultiplication of Matrix A and B:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (k = 0; k < col1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}