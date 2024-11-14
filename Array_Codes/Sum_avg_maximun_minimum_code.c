#include <stdio.h>

int main() 
{
   int numbers[5];
   int average, sum = 0;

   // Input the numbers and calculate sum
   for (int index = 0; index < 5; index++) {
       printf("Enter Number %d: ", index + 1);
       scanf("%d", &numbers[index]);
       sum += numbers[index];
   }
   average = (float) sum/5;
   // Initialize maximum and minimum
   int maximum = numbers[0];
   int minimum = numbers[0];

   // Find the maximum number
   for (int index = 1; index < 5; index++) {
       if (maximum < numbers[index]) {
           maximum = numbers[index];
       }
   }

   // Find the minimum number
   for (int index = 1; index < 5; index++) {
       if (minimum > numbers[index]) {
           minimum = numbers[index];
       }
   }

   // Print the entered numbers
   printf("Entered Numbers: ");
   for (int index = 0; index < 5; index++) {
       printf("%d ", numbers[index]);
   }
   printf("\n");

   // Print the results
   printf("Maximum Number is: %d\n", maximum);
   printf("Minimum Number is: %d\n", minimum);
   printf("Total Sum of Numbers is: %d\n", sum);
   printf("Average: %d\n", average);

   return 0;
}
