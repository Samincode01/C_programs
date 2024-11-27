#include <stdio.h>
int main() 
{
int rows, columns;
printf("Enter the number of rows and columns: ");
scanf("%d %d", &rows, &columns);
if(rows!=columns)
{
    printf("The Matrix is not symetrix");
    return 0;
}
int matrix[rows][columns],Transpose[columns][rows] ;
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
//Sum of non diagonal elements
int sumofnonDiagonalElements=0;
for(int i=0; i<rows;i++)
{
    for( int j=0; j<columns;j++)
    {
        if(i!=j)
        {
           sumofnonDiagonalElements+=matrix[i][j];
        }
    }

}
 printf("Sum of non Diagonal Elements= %d", sumofnonDiagonalElements);
    return 0;
}    
    
    
    
  
