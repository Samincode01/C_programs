#include <stdio.h>
int main() 
{
  
    int numbers[5];
    printf ("Enter Numbers\n");
for(int index=0; index<5;index++)
    {   
        printf ("Enter Number %d : ", index);
        scanf("%d", &numbers[index]);
    }
for(int index=0; index<5;index++)
    {
        printf("%d\n", numbers[index]);
    }
    return 0;
}
