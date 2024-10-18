#include <stdio.h>

int main() 
{
   int x,y,result;
   char operator;
   printf("==Welcome to Simple_Calculaor v2.00 by Samincode01== \n");
   printf("Input X= ");
   
   if (scanf("%d", &x) != 1) 
        {
            // Handle error: User did not enter a valid integer
            printf("Error: Invalid input for X. Please enter a number.\n");
             return 1;
        }
   printf("Input Y= ");
   
   if (scanf("%d", &y) != 1) 
        {
            // Handle error: User did not enter a valid integer
            printf("Error: Invalid input for Y. Please enter a number.\n");
             return 1;
        }
   printf("Input operator(+,-,*,/,%)= ");
   scanf(" %c",&operator);
   if (operator == '*')
                { result = x * y;
                 printf("%d %c %d = %d",x,operator,y,result);
                return 0; }
   if (operator == '+')
                { result = x + y;
                 printf("%d %c %d = %d",x,operator,y,result);
                return 0; } 
   if (operator == '-')
                { result = x - y;
                 printf("%d %c %d = %d",x,operator,y,result);
                return 0; }
   if (operator == '/')
                { result = x / y;
                 printf("%d %c %d = %d",x,operator,y,result);
                return 0; }
   if (operator == '%')
                { result = x % y;
                printf("%d %c %d = %d ",x,operator,y,result);
                return 0; }
   else
         printf("Error. Please Enter Correct operator");
    return 0;
}