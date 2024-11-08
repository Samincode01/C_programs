/*  1 0 1
    1 0
    1
          */
#include <stdio.h>

int main() 
{
    int n,row,col;
    printf("===Pattern Maker(Digits) === \n");
    printf("input N= ");
    scanf("%d", &n);
for(row=n;row>=1;row--)
    {
       for(col=1;col<=row;col++)
       {
       printf("%d", col%2);
       }
       printf("\n");
    }
    
    return 0;
}
