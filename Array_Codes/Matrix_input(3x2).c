#include <stdio.h>

int main() 
{
    int matrix[3][2];
   
 for(int row=0; row<3;row++)
    {
        for(int col=0; col<2;col++)
        {
            printf("matrix[%d] [%d]= ", row,col);
            scanf("%d", &matrix [row] [col]);
        }
       
    }
    
    for(int row=0; row<3;row++)
    {
        for(int col=0; col<2;col++)
        {
            printf("%d ", matrix[row] [col] );
        }
        printf("\n");
    }

    return 0;
}
