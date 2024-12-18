// Swapping two numbers using pointer and function
#include <stdio.h>
void swapnumbers(int *ptr1, int *ptr2)
{   int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int x = 10, y = 15;
    printf("Before swapping X = %d, Y = %d\n", x,y);
    swapnumbers(&x, &y);
    printf("After swapping X = %d, Y = %d\n", x,y);
    return 0;
}
