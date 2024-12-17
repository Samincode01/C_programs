#include <stdio.h>
union test
{
    int x, y; // X and Y will be the same value which will be assigned
};

int main() {
    union test t1;
    t1.x = 10; // X value is value considered as Y value
    
    printf("X = %d\n", t1.x);
    printf("Y = %d", t1.y);
    return 0;
}
