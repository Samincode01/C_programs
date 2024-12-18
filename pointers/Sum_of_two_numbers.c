// Adding two numbers using pointer
#include <stdio.h>

int main()
{
    int x = 10, y = 15, sum;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2= &y;
    sum = *ptr1 + *ptr2; //includes the value of x,y
    printf("The Sum is = %d\n", sum);
    return 0;
}
