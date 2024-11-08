/*  12345
    12345
    12345
    12345
    12345
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
       for(col=1;col<=n;col++)
       {
       printf("%d", col);
       }
       printf("\n");
    }
    
    return 0;
}
