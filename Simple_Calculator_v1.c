#include <stdio.h>

int main() 
{
   int x,y,result;
   char operator;
   printf("//Welcome to Simple_calculator v1.0  by Samincode01// \n");
   printf("Input X= ");
   scanf("%d",&x);
   printf("Input Y= ");
   scanf("%d",&y);
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