//pointer pointing to different variable
#include <stdio.h>
int main() 
{
    //showing values
    int x = 10, y= 20, z = 30;
    int *p;
    p = &x;
    printf("X = %d\n", *p);
    p = &y;
    printf("Y = %d\n", *p);
    p = &z;
    printf("Z = %d\n", *p);
    return 0;
}
