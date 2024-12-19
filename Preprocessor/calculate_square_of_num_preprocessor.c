#include <stdio.h>

#define SQUARE(x) ((x) * (x))   // Macro to calculate square of a number
//You can also make custom header in C project to make easier
int main()
{
    int num = 5;
    printf("Square of %d is: %d\n", num, SQUARE(num));  // Will be replaced as ((5) * (5))
    return 0;
}
