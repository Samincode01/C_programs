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
//Multiplication of diagonal elements
int MultiplicationDiagonalElements=1;
for(int i=0; i<rows;i++)
{
    for( int j=0; j<columns;j++)
    {
        if(i==j)
        {
           MultiplicationDiagonalElements*=matrix[i][j];
        }
    }
} 
printf("Multiplication of Diagonal Elements= %d", MultiplicationDiagonalElements);
return 0;
}    
    
    
    
  
