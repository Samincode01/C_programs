/*  1
    12
    123
    123
    12
    1
          */
#include <stdio.h>

int main() 
{
    int n,row,col;
    printf("===Pattern Maker(Digits) === \n");
    printf("input N= ");
    scanf("%d", &n);
for(row=1;row<=n;row++)
    {
       for(col=1;col<=row;col++)
       {
       printf("%d", col);
       }
       printf("\n");
    }
for(row=n;row>=1;row--)
    {
       for(col=1;col<=row;col++)
       {
       printf("%d", col);
       }
       printf("\n");
    }
    
    return 0;
}
