#include <stdio.h>

int main() 
{
    int A[3][2],B[3][2],C[3][2];
  
 printf("A=\n");
 for(int row=0; row<3;row++)
    {
        for(int col=0; col<2;col++)
        {
            printf("A [%d] [%d]= ", row,col);
            scanf("%d", &A [row] [col]);
        }
       
    }
    
    for(int row=0; row<3;row++)
    {
        for(int col=0; col<2;col++)
        {
            printf("%d ", A[row] [col] );
        }
        printf("\n");
    }
 printf("B=\n");
 for(int row=0; row<3;row++)
    {
        for(int col=0; col<2;col++)
        {
            printf("B [%d] [%d]= ", row,col);
            scanf("%d", &B [row] [col]);
        }
       
    }
    
    for(int row=0; row<3;row++)
    {
        for(int col=0; col<2;col++)
        {
            printf("%d ", B[row] [col] );
        }
        printf("\n");
    }
    
    printf("C= A + B\n");
     for(int row=0; row<3;row++)
    {
        for(int col=0; col<2;col++)
        {
            C[row][col]= A[row][col] + B[row][col];
        }
        
    }
       for(int row=0; row<3;row++)
    {
        for(int col=0; col<2;col++)
        {
            printf("%d ", C[row] [col] );
        }
        printf("\n");
    }    
    

    return 0;
}
