/*  
          1
          23
          456
          78910
          */
#include <stdio.h>

int main() 
{
    int n,row,col;
     printf("===Pattern Maker (Digits) === \n");
    printf("input N= ");
    scanf("%d", &n);
    int count=0;
for(row=1;row<=n;row++)
    {  
       for(col=1;col<=row;col++)
       {
       printf("%d", ++count);
       }
       printf("\n");
    }
    
    return 0;
}
