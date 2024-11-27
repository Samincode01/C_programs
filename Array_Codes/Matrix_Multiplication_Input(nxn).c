#include <stdio.h>

int main() 
{
    int rows1, columns1, rows2, columns2;

    // Input dimensions for Matrix 1
    printf("Enter the number of rows and columns for Matrix 1: ");
    scanf("%d %d", &rows1, &columns1);

    // Input dimensions for Matrix 2
    printf("Enter the number of rows and columns for Matrix 2: ");
    scanf("%d %d", &rows2, &columns2);

    // Check if multiplication is possible
    if (columns1 != rows2) 
    {
        printf("Matrix multiplication is not possible. Number of columns of Matrix 1 must be equal to the number of rows of Matrix 2.\n");
        return 0;
    }

    // Declare matrices
    int matrix1[rows1][columns1], matrix2[rows2][columns2], result[rows1][columns2];

    // Input Matrix 1
    printf("Enter the elements of Matrix 1:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < columns1; j++) 
        {
            printf("Matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input Matrix 2
    printf("Enter the elements of Matrix 2:\n");
    for (int i = 0; i < rows2; i++) 
    {
        for (int j = 0; j < columns2; j++) 
        {
            printf("Matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < columns2; j++) 
        {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < columns2; j++) 
        {
            for (int k = 0; k < columns1; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output result matrix
    printf("The result of Matrix 1 multiplied by Matrix 2 is:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < columns2; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
