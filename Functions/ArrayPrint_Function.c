// Online C compiler to run C program online
#include <stdio.h>

//Funtion to print array
void printArray(int numbers[], int size)
{
for(int i=0; i<size; i++)
{
    printf("%d ", numbers[i]);
}
}
//Code
int main() {
    int numbers[] = {10,12,18};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    printArray(numbers, size);
    return 0;
}
