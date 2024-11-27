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
//identity matrix

for(int i=0; i<rows;i++)
{
    for( int j=0; j<columns;j++)
    {       
        if((i==j && matrix[i][j]!=1)|| (i!=j&&matrix[i][j]!=0))
        {
            printf("Not an identity matrix \n");
            return 0;
        }
    }

}
 printf("This is an identity Matrix");
return 0;
}    
    
    
    
  
