#include <stdio.h>
int main() 
{
int rows, columns;
printf("Enter the number of rows and columns: ");
scanf("%d %d", &rows, &columns);
int matrix[rows][columns];
printf("Enter the elements of the matrix: \n");
for(int i=0; i<rows; i++)
{
    for(int j=0; j<columns; j++)
    {
        printf("Matrix[%d][%d]= ", i,j);
        scanf("%d", &matrix[i][j]);
    }
}
 printf("The Matrix is:\n");
 
for(int i=0; i<rows; i++)
{
    for(int j=0; j<columns; j++)
    {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
    return 0;
}
