// Online C compiler to run C program online
#include <stdio.h>

int main() 

{
    int option;
    printf("===Welcome to simple calculator and Temperature Converter==\n");
    printf("===Programmed by samincode01==\n");
    printf("Select an option: \n");
    printf("1. Simple Calculator.\n");
    printf("2. Temperature Converter.\n");
    printf("Choose Option: ");
    scanf("%d",&option);
    
    switch(option)
  {
      case 1:
            {   int x,y,result;
                char operator;
                printf("==Simple_Calculator v2.00 by Samincode01== \n");
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
            break;
            }
    case 2:
            {
  int options;
  float celsius,fahrenheit,convertedtemp;
  printf("==Welcome to Temperature Converter v1.00 by samincode01== \n");
  printf("Select an option:\n");
  printf("1. Celsius to Fahrenheit.\n");
  printf("2. Fahrenheit to celsius.\n");
  printf("Choose an option: ");
  scanf("%d",&options);
  
  switch (options)
    {
      case 1:
              {
                printf("Enter Temperature in Celsius scale: ");
                if (scanf("%f", &celsius) != 1) 
                {
                    // Handle error: User did not enter a valid integer
                    printf("Error: Invalid input for Celsius. Please enter a number.\n");
                    return 1;
                    }
                convertedtemp = (celsius * 9.0 / 5.0) + 32;
                printf("The Temperature in Fahrenheit scale is: %f",convertedtemp);
                break;
              }
      case 2:
              {
                printf("Enter Temperature in Fahrenheit scale: ");
                if (scanf("%f", &fahrenheit) != 1) 
                {
                    // Handle error: User did not enter a valid integer
                    printf("Error: Invalid input for Fahrenheit. Please enter a number.\n");
                    return 1;
                    }
                convertedtemp = (fahrenheit - 32) * 5.0 / 9.0;
                printf("The Temperature in Celsius scale is: %f",convertedtemp);
                break;
              }
    default:
    printf("Wrong option selected. Please select the correct option");
    break;
    }
return 0;
}
    default:
    printf("Wrong option. Try again");
  }
  return 0;
}