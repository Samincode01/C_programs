#include <stdio.h>
void modifyvalue(int *ptr)   //Recieves the address of x
{
     *ptr= 20;     // Changes the value of the address
}
int main() 
{
    int num = 10;
    printf("Before modification = %d\n", num);
    modifyvalue(&num); //sends the address to pointer
    printf("After modification = %d\n", num); // the value will changed
    return 0;
}
