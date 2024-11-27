#include <stdio.h>
int main() 
{
    int rows, columns;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    if (rows != columns) 
    {
        printf("The Matrix is not symmetric.\n");
        return 0;
    }

    int matrix1[rows][columns], matrix2[rows][columns], result1[rows][columns],
        result2[rows][columns];

    // Input Matrix 1
    printf("Enter the elements of Matrix 1:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            printf("Matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Print Matrix 1
    printf("The Matrix 1 is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Input Matrix 2
    printf("Enter the elements of Matrix 2:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            printf("Matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Print Matrix 2
    printf("The Matrix 2 is:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Addition of Matrix 1 and Matrix 2
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            result1[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result
    printf("Addition of Matrix 1 and Matrix 2:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            printf("%d ", result1[i][j]);
        }
        printf("\n");
    }

// Substraction of Matrix 1 and Matrix 2
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            result2[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Print the result
    printf("Substraction of Matrix 1 and Matrix 2:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            printf("%d ", result2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

