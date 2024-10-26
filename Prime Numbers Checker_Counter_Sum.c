//Print prime numbers 1 to 100
// User input 1 to 100
//Count prime numbers
//Sum of prime numbers
#include <stdio.h>
#include <ctype.h>
int main() 
{
   int number, count=0,n,m, totalprimenumbers=0, sumofprimenumbers=0;
   printf("===Welcome to Prime numbers Checker by Samincode01===\n ");
   printf("Enter starting: ");
   scanf("%d",&m);
   printf("Enter Last number: ");
   scanf("%d",&n);
   printf("%d to %d Prime numbers are:\n", m,n);
  for(number=m;number<=n;number++)
  {
    
    count=0;
    if(number<=1) 
    {
    count=1;
    }
    for(int i=2;i<number;i++)
        {   
        if(number%i==0)
        {
            count=1;
            break;
        }
        }
    if(count==0)
        printf("%d\n", number);
        totalprimenumbers++ ;
        sumofprimenumbers= sumofprimenumbers + number;
    }
    printf("\nTotal Prime Numbers: %d\n", totalprimenumbers);
    printf("Sum Prime Numbers: %d\n", sumofprimenumbers);
    return 0;
}