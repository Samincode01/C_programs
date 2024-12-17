#include <stdio.h>
union test
{
    char ch; // Size 1 byte
    int x; //Size 4 bytes
    float y; // size 4 bytes
};
int main() {
    union test t1;
    union test t2;
    printf("Size of (t1)= %d\n", sizeof(t1)); // It will print the maximum size of character type, here maximum is int x and float y
    printf("Size of (t2)= %d\n",sizeof(t2));
    return 0;
}
