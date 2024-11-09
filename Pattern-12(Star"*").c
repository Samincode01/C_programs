/*
    *    
    **   
    * *  
    *  * 
    *****

*/

#include <stdio.h>

int main() 
{
int n, col, row;
    printf("Input N= ");
    scanf("%d",&n);
    
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
    {
       if(col==1 || row==n || col==row)
            printf("*");
       else
        printf(" ");
    }
    printf("\n");
    }
    return 0;
}
