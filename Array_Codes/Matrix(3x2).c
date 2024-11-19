#include <stdio.h>

int main() 
{
    int matrix[3][2]=
    {
        {10,20},
        {30,40},
        {50,60}
        
    };
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
