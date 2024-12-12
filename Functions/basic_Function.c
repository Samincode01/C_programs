#include <stdio.h>

void add(int num1, int num2)
{
    int result;
    result = num1 + num2;
    printf("Sum is = %d\n", result);
}

void sub(int num1, int num2)
{
    int result;
    result = num1 - num2;
    printf("Substraction is = %d\n", result);
}

void multi(int num1, int num2)
{
    int result;
    result = num1 * num2;
    printf("Multiplication is = %d\n", result);
}
int main() 

{
 add(10,28);
 add(15,18);
 sub(50,12);
 sub(18,10);
 multi(8,2);
 multi(18,28);
 return 0;


}
