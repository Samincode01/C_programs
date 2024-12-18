#include <stdio.h>
void modifyvalue(int num)
{
     num= 20;
}
int main() {
    int num = 10;
    printf("Before modification = %d\n", num);
    modifyvalue(num);
    printf("After modification = %d\n", num);
    return 0;
}
