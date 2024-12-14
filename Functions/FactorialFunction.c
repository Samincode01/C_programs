#include <stdio.h>
//Factorial Function
int fact(int n)
{
    if (n==1)
    return 1;
    
    else
    return n*fact(n-1);
}
//Main Code full
int main() {
    int num;
    printf("Enter a number to calculate Factorial:\n");
    scanf("%d",&num);
    int result = fact (num);
    printf("Factorial of %d = %d", num, result);
    return 0;
}  

