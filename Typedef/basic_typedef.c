#include <stdio.h>
int main()
{
  typedef char LETTER; // char ch is normal one
  LETTER ch; // LETTER is working like char
  ch= 'x';
  printf("ch= %c", ch);
  return 0;
  
}
