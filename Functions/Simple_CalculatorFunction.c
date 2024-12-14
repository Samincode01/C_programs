#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int multi(int num1, int num2)
{
    return num1 * num2;
}
int divi(int num1, int num2)
{
    return num1 / num2;
}
int getUserOption()
{
    int option;
    printf("Simple Calculator\n");
    printf("Choose an Option:\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d",&option);
    return option;
}

int main() {
    int num1,num2;
    int option= getUserOption();
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &num1, &num2);
    switch(option){
        case 1:
        printf("Result= %d\n", add(num1,num2));
        break;
        case 2:
        printf("Result= %d\n", sub(num1,num2));
        break;
        case 3:
        printf("Result= %d\n", multi(num1,num2));
        break;
        case 4:
        printf("Result= %d\n", divi(num1,num2));
        break;
        
    }

    return 0;
}
