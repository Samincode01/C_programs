#include <stdio.h>

int main() 
{
    int x = 5;
    int *p;
    p = &x; //it will show the memory address
    printf("Value of x = %d\n", x);
    printf("Address of x = %u\n",&x);
    //%x for hexa-decimal value and %u for always positive value which is safe for program.
    printf("Address of p = %u\n",p);
    printf("Content of p = %d\n", *p);
    printf("Value = %u\n", &p);
    return 0;
}
